/****************************************************************************
** Meta object code from reading C++ file 'main_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../main_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_macMainWidget_t {
    QByteArrayData data[14];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_macMainWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_macMainWidget_t qt_meta_stringdata_macMainWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "macMainWidget"
QT_MOC_LITERAL(1, 14, 10), // "testsignal"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "sendIpPort"
QT_MOC_LITERAL(4, 37, 2), // "ip"
QT_MOC_LITERAL(5, 40, 4), // "port"
QT_MOC_LITERAL(6, 45, 15), // "switchPageLocal"
QT_MOC_LITERAL(7, 61, 10), // "switchPage"
QT_MOC_LITERAL(8, 72, 10), // "McuInfo_t*"
QT_MOC_LITERAL(9, 83, 3), // "val"
QT_MOC_LITERAL(10, 87, 13), // "makeDevWidget"
QT_MOC_LITERAL(11, 101, 4), // "info"
QT_MOC_LITERAL(12, 106, 13), // "disTextBrower"
QT_MOC_LITERAL(13, 120, 3) // "dis"

    },
    "macMainWidget\0testsignal\0\0sendIpPort\0"
    "ip\0port\0switchPageLocal\0switchPage\0"
    "McuInfo_t*\0val\0makeDevWidget\0info\0"
    "disTextBrower\0dis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_macMainWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    2,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   52,    2, 0x0a /* Public */,
       7,    1,   53,    2, 0x0a /* Public */,
      10,    1,   56,    2, 0x0a /* Public */,
      12,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::VoidStar,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::VoidStar,   11,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void macMainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        macMainWidget *_t = static_cast<macMainWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testsignal((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 1: _t->sendIpPort((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2]))); break;
        case 2: _t->switchPageLocal(); break;
        case 3: _t->switchPage((*reinterpret_cast< McuInfo_t*(*)>(_a[1]))); break;
        case 4: _t->makeDevWidget((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 5: _t->disTextBrower((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (macMainWidget::*_t)(void * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&macMainWidget::testsignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (macMainWidget::*_t)(const QString & , unsigned short );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&macMainWidget::sendIpPort)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject macMainWidget::staticMetaObject = {
    { &macShadowWidget::staticMetaObject, qt_meta_stringdata_macMainWidget.data,
      qt_meta_data_macMainWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *macMainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *macMainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_macMainWidget.stringdata0))
        return static_cast<void*>(const_cast< macMainWidget*>(this));
    return macShadowWidget::qt_metacast(_clname);
}

int macMainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = macShadowWidget::qt_metacall(_c, _id, _a);
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
void macMainWidget::testsignal(void * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void macMainWidget::sendIpPort(const QString & _t1, unsigned short _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_disTextBrowerTh_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_disTextBrowerTh_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_disTextBrowerTh_t qt_meta_stringdata_disTextBrowerTh = {
    {
QT_MOC_LITERAL(0, 0, 15), // "disTextBrowerTh"
QT_MOC_LITERAL(1, 16, 13), // "toDisTextSlot"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "disTextBrowerTh\0toDisTextSlot\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_disTextBrowerTh[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void disTextBrowerTh::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        disTextBrowerTh *_t = static_cast<disTextBrowerTh *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toDisTextSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (disTextBrowerTh::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&disTextBrowerTh::toDisTextSlot)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject disTextBrowerTh::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_disTextBrowerTh.data,
      qt_meta_data_disTextBrowerTh,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *disTextBrowerTh::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *disTextBrowerTh::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_disTextBrowerTh.stringdata0))
        return static_cast<void*>(const_cast< disTextBrowerTh*>(this));
    return QThread::qt_metacast(_clname);
}

int disTextBrowerTh::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void disTextBrowerTh::toDisTextSlot(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SomeObject_t {
    QByteArrayData data[3];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SomeObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SomeObject_t qt_meta_stringdata_SomeObject = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SomeObject"
QT_MOC_LITERAL(1, 11, 10), // "someSignal"
QT_MOC_LITERAL(2, 22, 0) // ""

    },
    "SomeObject\0someSignal\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SomeObject[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void SomeObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SomeObject *_t = static_cast<SomeObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->someSignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SomeObject::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SomeObject::someSignal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SomeObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SomeObject.data,
      qt_meta_data_SomeObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SomeObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SomeObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SomeObject.stringdata0))
        return static_cast<void*>(const_cast< SomeObject*>(this));
    return QObject::qt_metacast(_clname);
}

int SomeObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void SomeObject::someSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_SubThread_t {
    QByteArrayData data[5];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubThread_t qt_meta_stringdata_SubThread = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SubThread"
QT_MOC_LITERAL(1, 10, 7), // "giveDis"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 3), // "str"
QT_MOC_LITERAL(4, 23, 8) // "someSlot"

    },
    "SubThread\0giveDis\0\0str\0someSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SubThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SubThread *_t = static_cast<SubThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->giveDis((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->someSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SubThread::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SubThread::giveDis)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SubThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_SubThread.data,
      qt_meta_data_SubThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SubThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SubThread.stringdata0))
        return static_cast<void*>(const_cast< SubThread*>(this));
    return QThread::qt_metacast(_clname);
}

int SubThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SubThread::giveDis(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SubThread3_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubThread3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubThread3_t qt_meta_stringdata_SubThread3 = {
    {
QT_MOC_LITERAL(0, 0, 10) // "SubThread3"

    },
    "SubThread3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubThread3[] = {

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

void SubThread3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SubThread3::staticMetaObject = {
    { &SubThread::staticMetaObject, qt_meta_stringdata_SubThread3.data,
      qt_meta_data_SubThread3,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SubThread3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubThread3::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SubThread3.stringdata0))
        return static_cast<void*>(const_cast< SubThread3*>(this));
    return SubThread::qt_metacast(_clname);
}

int SubThread3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SubThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
