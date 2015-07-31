/****************************************************************************
** Meta object code from reading C++ file 'loacalfileserver.h'
**
** Created: Fri Jul 31 15:40:47 2015
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../loacalfileserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loacalfileserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LoacalFileServer[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      42,   40,   17,   17, 0x08,
      76,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LoacalFileServer[] = {
    "LoacalFileServer\0\0returnButtonClicked()\0"
    ",\0processItem(QTreeWidgetItem*,int)\0"
    "display(QString*)\0"
};

const QMetaObject LoacalFileServer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LoacalFileServer,
      qt_meta_data_LoacalFileServer, 0 }
};

const QMetaObject *LoacalFileServer::metaObject() const
{
    return &staticMetaObject;
}

void *LoacalFileServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LoacalFileServer))
	return static_cast<void*>(const_cast< LoacalFileServer*>(this));
    return QWidget::qt_metacast(_clname);
}

int LoacalFileServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: returnButtonClicked(); break;
        case 1: processItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: display((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
