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
    QByteArrayData data[12];
    char stringdata0[106];
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
QT_MOC_LITERAL(11, 101, 4) // "info"

    },
    "macMainWidget\0testsignal\0\0sendIpPort\0"
    "ip\0port\0switchPageLocal\0switchPage\0"
    "McuInfo_t*\0val\0makeDevWidget\0info"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_macMainWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    2,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   47,    2, 0x0a /* Public */,
       7,    1,   48,    2, 0x0a /* Public */,
      10,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::VoidStar,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::VoidStar,   11,

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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
