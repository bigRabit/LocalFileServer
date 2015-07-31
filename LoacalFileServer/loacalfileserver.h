#ifndef LOACALFILESERVER_H
#define LOACALFILESERVER_H

#include <QtGui/QWidget>
#include "ui_loacalfileserver.h"
#include <QGridLayout>
#include <QTreeWidget>
#include <QString>
#include <QFileInfoList>
#include <QFileInfo>
#include <QDir>
#include <QDateTime>
#include <QPushButton>
#include <QDebug>
#include <QHeaderView>
#include <QHBoxLayout>

class LoacalFileServer : public QWidget
{
	Q_OBJECT

public:
	LoacalFileServer(QWidget *parent = 0, Qt::WFlags flags = 0);
	~LoacalFileServer();

private:
	Ui::LoacalFileServerClass ui;

	QTreeWidget *fileWidget;
	QGridLayout *mainLayout;
	QPushButton *returnButton;
	QHash<QString,bool> isDirectory;
	QString root;
	QPushButton *downloadButton;
	QHBoxLayout *bottomLayout;

private slots:
	void returnButtonClicked();
	void processItem(QTreeWidgetItem*,int);
	void display(QString*);
};

#endif // LOACALFILESERVER_H
