#include <QtGui/QApplication>
#include "loacalfileserver.h"
#include <QTextCodec>

int main(int argc, char *argv[])
{
	QTextCodec *codec = QTextCodec::codecForName("GBK");

    QTextCodec::setCodecForTr(codec);

    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());

	QApplication a(argc, argv);
	LoacalFileServer w;
	w.show();
	return a.exec();
}
