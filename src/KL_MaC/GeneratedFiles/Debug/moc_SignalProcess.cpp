/****************************************************************************
** Meta object code from reading C++ file 'SignalProcess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SignalProcess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SignalProcess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_macSPcombox_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_macSPcombox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_macSPcombox_t qt_meta_stringdata_macSPcombox = {
    {
QT_MOC_LITERAL(0, 0, 11) // "macSPcombox"

    },
    "macSPcombox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_macSPcombox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void macSPcombox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject macSPcombox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_macSPcombox.data,
      qt_meta_data_macSPcombox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *macSPcombox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *macSPcombox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_macSPcombox.stringdata0))
        return static_cast<void*>(const_cast< macSPcombox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int macSPcombox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_macSPbtn_t {
    QByteArrayData data[5];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_macSPbtn_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_macSPbtn_t qt_meta_stringdata_macSPbtn = {
    {
QT_MOC_LITERAL(0, 0, 8), // "macSPbtn"
QT_MOC_LITERAL(1, 9, 12), // "webtnClickAt"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 1), // "r"
QT_MOC_LITERAL(4, 25, 1) // "c"

    },
    "macSPbtn\0webtnClickAt\0\0r\0c"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_macSPbtn[] = {

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
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

       0        // eod
};

void macSPbtn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        macSPbtn *_t = static_cast<macSPbtn *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->webtnClickAt((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (macSPbtn::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&macSPbtn::webtnClickAt)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject macSPbtn::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_macSPbtn.data,
      qt_meta_data_macSPbtn,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *macSPbtn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *macSPbtn::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_macSPbtn.stringdata0))
        return static_cast<void*>(const_cast< macSPbtn*>(this));
    return QPushButton::qt_metacast(_clname);
}

int macSPbtn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
void macSPbtn::webtnClickAt(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_macSP_t {
    QByteArrayData data[17];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_macSP_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_macSP_t qt_meta_stringdata_macSP = {
    {
QT_MOC_LITERAL(0, 0, 5), // "macSP"
QT_MOC_LITERAL(1, 6, 11), // "giveQueryIp"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 3), // "u8*"
QT_MOC_LITERAL(4, 23, 2), // "ip"
QT_MOC_LITERAL(5, 26, 3), // "u16"
QT_MOC_LITERAL(6, 30, 1), // "p"
QT_MOC_LITERAL(7, 32, 8), // "ipChange"
QT_MOC_LITERAL(8, 41, 3), // "row"
QT_MOC_LITERAL(9, 45, 3), // "col"
QT_MOC_LITERAL(10, 49, 11), // "deviceSFRST"
QT_MOC_LITERAL(11, 61, 11), // "ClickedItem"
QT_MOC_LITERAL(12, 73, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(13, 90, 14), // "webtnClickDeal"
QT_MOC_LITERAL(14, 105, 1), // "r"
QT_MOC_LITERAL(15, 107, 1), // "c"
QT_MOC_LITERAL(16, 109, 10) // "receiveMul"

    },
    "macSP\0giveQueryIp\0\0u8*\0ip\0u16\0p\0"
    "ipChange\0row\0col\0deviceSFRST\0ClickedItem\0"
    "QTreeWidgetItem*\0webtnClickDeal\0r\0c\0"
    "receiveMul"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_macSP[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   49,    2, 0x0a /* Public */,
      10,    0,   54,    2, 0x0a /* Public */,
      11,    2,   55,    2, 0x0a /* Public */,
      13,    2,   60,    2, 0x0a /* Public */,
      16,    0,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void,

       0        // eod
};

void macSP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        macSP *_t = static_cast<macSP *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->giveQueryIp((*reinterpret_cast< u8*(*)>(_a[1])),(*reinterpret_cast< u16(*)>(_a[2]))); break;
        case 1: _t->ipChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->deviceSFRST(); break;
        case 3: _t->ClickedItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->webtnClickDeal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->receiveMul(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (macSP::*_t)(u8 * , u16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&macSP::giveQueryIp)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject macSP::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_macSP.data,
      qt_meta_data_macSP,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *macSP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *macSP::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_macSP.stringdata0))
        return static_cast<void*>(const_cast< macSP*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int macSP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void macSP::giveQueryIp(u8 * _t1, u16 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
