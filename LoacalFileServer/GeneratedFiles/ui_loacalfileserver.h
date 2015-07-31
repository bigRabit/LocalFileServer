/********************************************************************************
** Form generated from reading ui file 'loacalfileserver.ui'
**
** Created: Fri Jul 31 15:40:47 2015
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_LOACALFILESERVER_H
#define UI_LOACALFILESERVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoacalFileServerClass
{
public:

    void setupUi(QWidget *LoacalFileServerClass)
    {
    if (LoacalFileServerClass->objectName().isEmpty())
        LoacalFileServerClass->setObjectName(QString::fromUtf8("LoacalFileServerClass"));
    LoacalFileServerClass->resize(600, 400);

    retranslateUi(LoacalFileServerClass);

    QMetaObject::connectSlotsByName(LoacalFileServerClass);
    } // setupUi

    void retranslateUi(QWidget *LoacalFileServerClass)
    {
    LoacalFileServerClass->setWindowTitle(QApplication::translate("LoacalFileServerClass", "LoacalFileServer", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(LoacalFileServerClass);
    } // retranslateUi

};

namespace Ui {
    class LoacalFileServerClass: public Ui_LoacalFileServerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOACALFILESERVER_H
