/****************************************************************************
** Meta object code from reading C++ file 'FiuNv.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FiuNv.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FiuNv.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_macFiuNv_t {
    QByteArrayData data[14];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_macFiuNv_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_macFiuNv_t qt_meta_stringdata_macFiuNv = {
    {
QT_MOC_LITERAL(0, 0, 8), // "macFiuNv"
QT_MOC_LITERAL(1, 9, 11), // "giveQueryIp"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "u8*"
QT_MOC_LITERAL(4, 26, 2), // "ip"
QT_MOC_LITERAL(5, 29, 3), // "u16"
QT_MOC_LITERAL(6, 33, 1), // "p"
QT_MOC_LITERAL(7, 35, 11), // "relayactive"
QT_MOC_LITERAL(8, 47, 10), // "relayclear"
QT_MOC_LITERAL(9, 58, 5), // "check"
QT_MOC_LITERAL(10, 64, 8), // "ipChange"
QT_MOC_LITERAL(11, 73, 3), // "row"
QT_MOC_LITERAL(12, 77, 3), // "col"
QT_MOC_LITERAL(13, 81, 11) // "deviceSFRST"

    },
    "macFiuNv\0giveQueryIp\0\0u8*\0ip\0u16\0p\0"
    "relayactive\0relayclear\0check\0ipChange\0"
    "row\0col\0deviceSFRST"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_macFiuNv[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   44,    2, 0x0a /* Public */,
       8,    1,   45,    2, 0x0a /* Public */,
      10,    2,   48,    2, 0x0a /* Public */,
      13,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void,

       0        // eod
};

void macFiuNv::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        macFiuNv *_t = static_cast<macFiuNv *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->giveQueryIp((*reinterpret_cast< u8*(*)>(_a[1])),(*reinterpret_cast< u16(*)>(_a[2]))); break;
        case 1: _t->relayactive(); break;
        case 2: _t->relayclear((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->ipChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->deviceSFRST(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (macFiuNv::*_t)(u8 * , u16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&macFiuNv::giveQueryIp)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject macFiuNv::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_macFiuNv.data,
      qt_meta_data_macFiuNv,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *macFiuNv::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *macFiuNv::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_macFiuNv.stringdata0))
        return static_cast<void*>(const_cast< macFiuNv*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int macFiuNv::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void macFiuNv::giveQueryIp(u8 * _t1, u16 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
