/****************************************************************************
** Meta object code from reading C++ file 'icon_delegate.h'
**
** Created: Tue Dec 25 13:34:57 2007
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/icon_delegate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'icon_delegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_IconDelegate[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_IconDelegate[] = {
    "IconDelegate\0"
};

const QMetaObject IconDelegate::staticMetaObject = {
    { &QAbstractItemDelegate::staticMetaObject, qt_meta_stringdata_IconDelegate,
      qt_meta_data_IconDelegate, 0 }
};

const QMetaObject *IconDelegate::metaObject() const
{
    return &staticMetaObject;
}

void *IconDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IconDelegate))
	return static_cast<void*>(const_cast< IconDelegate*>(this));
    return QAbstractItemDelegate::qt_metacast(_clname);
}

int IconDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
