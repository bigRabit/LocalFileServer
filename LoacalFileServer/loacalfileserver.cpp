#include "loacalfileserver.h"

LoacalFileServer::LoacalFileServer(QWidget *parent, Qt::WFlags flags)
	: QWidget(parent, flags)
{
	ui.setupUi(this);

	fileWidget = new QTreeWidget(this);
	returnButton = new QPushButton(tr("Return"));
	downloadButton = new QPushButton(tr("Download"));

	mainLayout = new QGridLayout(this);
	bottomLayout = new QHBoxLayout(this);
	mainLayout->addWidget(fileWidget);
	bottomLayout->addWidget(returnButton);
	bottomLayout->addWidget(downloadButton);
	mainLayout->addLayout(bottomLayout,1,0);

	setLayout(mainLayout);

	connect(fileWidget,SIGNAL(itemActivated(QTreeWidgetItem*,int)),this,SLOT(processItem(QTreeWidgetItem*,int)));
	connect(returnButton,SIGNAL(clicked()),this,SLOT(returnButtonClicked()));

	fileWidget->setHeaderLabels(QStringList() << tr("文件名") << tr("大小") << tr("创建时间") << tr("最后修改日期"));
	fileWidget->header()->setResizeMode(QHeaderView::ResizeToContents );

	this->setWindowTitle("LocalFileServer"+root);

//Local Folder display
	QString root("D://FileServer");
	this->setWindowTitle("LocalFileServer : "+root);
	display(&root);

	if(root == "D://FileServer")
		returnButton->setEnabled(false);
	else
		returnButton->setEnabled(true);
}

LoacalFileServer::~LoacalFileServer()
{

}

void LoacalFileServer::processItem(QTreeWidgetItem* item,int)
{
	QString name = item->text(0);
	if(isDirectory.value(name))
	{
		if(root.isEmpty())
		{
			root = "D://FileServer";
		}

		fileWidget->clear();
		isDirectory.clear();
		root += '/';
		root += name;
		qDebug() << root;

		display(&root);

	if(root == "D://FileServer")
		returnButton->setEnabled(false);
	else
		returnButton->setEnabled(true);
		
	}
}

void LoacalFileServer::returnButtonClicked()
{
	fileWidget->clear();
	isDirectory.clear();
	root = root.left(root.lastIndexOf('/'));
	
	if(root.isEmpty())
	{
		root = "D://FileServer";
	}

	display(&root);

	if(root == "D://FileServer")
		returnButton->setEnabled(false);
	else
		returnButton->setEnabled(true);
}	

void LoacalFileServer::display(QString* currentPath)
{
	//QString currentPath = root;
	this->setWindowTitle("LocalFileServer : "+(*currentPath));
	QDir rootDir(*currentPath);
	QList<QTreeWidgetItem *> itemList;
	QStringList tmplist;
	tmplist << "*";
	QFileInfoList list = rootDir.entryInfoList(tmplist);

	for(unsigned int i = 0;i<list.count();i++)
	{
		QFileInfo tmpFileInfo = list.at(i);

		QTreeWidgetItem *item = new QTreeWidgetItem;
		
		if(tmpFileInfo.fileName() == "." || tmpFileInfo.fileName() == "..")
				continue;

		item->setText(0,tmpFileInfo.fileName());
		
		if(tmpFileInfo.isDir())
		{
			item->setText(1,QString(""));
		}
		else
		{
			item->setText(1,QString::number(tmpFileInfo.size()));
		}
		item->setText(2,tmpFileInfo.created().toString("MMM dd yyyy"));
		//item->setText(3,tmpFileInfo.group());
		item->setText(3,tmpFileInfo.lastModified().toString("MMM dd yyyy"));

		QPixmap pixmap(tmpFileInfo.isDir()?"./dir.png":"./file.png");
		item->setIcon(0,pixmap);
		
		itemList.push_back(item);

		//the path is whether the directory
		isDirectory[tmpFileInfo.fileName()] = tmpFileInfo.isDir();
	}

	fileWidget->addTopLevelItems(itemList);
}