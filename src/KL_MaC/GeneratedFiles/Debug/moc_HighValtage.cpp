/****************************************************************************
** Meta object code from reading C++ file 'HighValtage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../HighValtage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HighValtage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_queryThread_t {
    QByteArrayData data[5];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_queryThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_queryThread_t qt_meta_stringdata_queryThread = {
    {
QT_MOC_LITERAL(0, 0, 11), // "queryThread"
QT_MOC_LITERAL(1, 12, 14), // "giveQueryedVal"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "type"
QT_MOC_LITERAL(4, 33, 3) // "val"

    },
    "queryThread\0giveQueryedVal\0\0type\0val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_queryThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::VoidStar,    3,    4,

       0        // eod
};

void queryThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        queryThread *_t = static_cast<queryThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->giveQueryedVal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (queryThread::*_t)(int , void * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&queryThread::giveQueryedVal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject queryThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_queryThread.data,
      qt_meta_data_queryThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *queryThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *queryThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_queryThread.stringdata0))
        return static_cast<void*>(const_cast< queryThread*>(this));
    return QThread::qt_metacast(_clname);
}

int queryThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void queryThread::giveQueryedVal(int _t1, void * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_macHighValtage_t {
    QByteArrayData data[18];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_macHighValtage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_macHighValtage_t qt_meta_stringdata_macHighValtage = {
    {
QT_MOC_LITERAL(0, 0, 14), // "macHighValtage"
QT_MOC_LITERAL(1, 15, 11), // "giveQueryIp"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3), // "u8*"
QT_MOC_LITERAL(4, 32, 2), // "ip"
QT_MOC_LITERAL(5, 35, 3), // "u16"
QT_MOC_LITERAL(6, 39, 1), // "p"
QT_MOC_LITERAL(7, 41, 12), // "EmitQuerySig"
QT_MOC_LITERAL(8, 54, 6), // "setVal"
QT_MOC_LITERAL(9, 61, 4), // "type"
QT_MOC_LITERAL(10, 66, 11), // "relayactive"
QT_MOC_LITERAL(11, 78, 10), // "relayclear"
QT_MOC_LITERAL(12, 89, 5), // "check"
QT_MOC_LITERAL(13, 95, 8), // "ipChange"
QT_MOC_LITERAL(14, 104, 3), // "row"
QT_MOC_LITERAL(15, 108, 3), // "col"
QT_MOC_LITERAL(16, 112, 7), // "ResZAct"
QT_MOC_LITERAL(17, 120, 7) // "ResFAct"

    },
    "macHighValtage\0giveQueryIp\0\0u8*\0ip\0"
    "u16\0p\0EmitQuerySig\0setVal\0type\0"
    "relayactive\0relayclear\0check\0ipChange\0"
    "row\0col\0ResZAct\0ResFAct"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_macHighValtage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   59,    2, 0x0a /* Public */,
       8,    2,   60,    2, 0x0a /* Public */,
      10,    0,   65,    2, 0x0a /* Public */,
      11,    1,   66,    2, 0x0a /* Public */,
      13,    2,   69,    2, 0x0a /* Public */,
      16,    0,   74,    2, 0x0a /* Public */,
      17,    0,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::VoidStar,    9,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void macHighValtage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        macHighValtage *_t = static_cast<macHighValtage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->giveQueryIp((*reinterpret_cast< u8*(*)>(_a[1])),(*reinterpret_cast< u16(*)>(_a[2]))); break;
        case 1: _t->EmitQuerySig(); break;
        case 2: _t->setVal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 3: _t->relayactive(); break;
        case 4: _t->relayclear((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ipChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->ResZAct(); break;
        case 7: _t->ResFAct(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (macHighValtage::*_t)(u8 * , u16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&macHighValtage::giveQueryIp)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject macHighValtage::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_macHighValtage.data,
      qt_meta_data_macHighValtage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *macHighValtage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *macHighValtage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_macHighValtage.stringdata0))
        return static_cast<void*>(const_cast< macHighValtage*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int macHighValtage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void macHighValtage::giveQueryIp(u8 * _t1, u16 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
