/****************************************************************************
** Meta object code from reading C++ file 'PowerSupplyBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PowerSupplyBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PowerSupplyBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_macPowerSupplyBox_t {
    QByteArrayData data[6];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_macPowerSupplyBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_macPowerSupplyBox_t qt_meta_stringdata_macPowerSupplyBox = {
    {
QT_MOC_LITERAL(0, 0, 17), // "macPowerSupplyBox"
QT_MOC_LITERAL(1, 18, 11), // "relayactive"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "ipChange"
QT_MOC_LITERAL(4, 40, 3), // "row"
QT_MOC_LITERAL(5, 44, 3) // "col"

    },
    "macPowerSupplyBox\0relayactive\0\0ipChange\0"
    "row\0col"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_macPowerSupplyBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    2,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,

       0        // eod
};

void macPowerSupplyBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        macPowerSupplyBox *_t = static_cast<macPowerSupplyBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->relayactive(); break;
        case 1: _t->ipChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject macPowerSupplyBox::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_macPowerSupplyBox.data,
      qt_meta_data_macPowerSupplyBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *macPowerSupplyBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *macPowerSupplyBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_macPowerSupplyBox.stringdata0))
        return static_cast<void*>(const_cast< macPowerSupplyBox*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int macPowerSupplyBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
