/****************************************************************************
** Meta object code from reading C++ file 'tree_sys.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tree_sys.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tree_sys.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_macTreeSys_t {
    QByteArrayData data[16];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_macTreeSys_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_macTreeSys_t qt_meta_stringdata_macTreeSys = {
    {
QT_MOC_LITERAL(0, 0, 10), // "macTreeSys"
QT_MOC_LITERAL(1, 11, 13), // "GiveLocalInfo"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "infotype"
QT_MOC_LITERAL(4, 35, 3), // "row"
QT_MOC_LITERAL(5, 39, 3), // "col"
QT_MOC_LITERAL(6, 43, 4), // "text"
QT_MOC_LITERAL(7, 48, 20), // "showStackWidgetLocal"
QT_MOC_LITERAL(8, 69, 15), // "showStackWidget"
QT_MOC_LITERAL(9, 85, 10), // "McuInfo_t*"
QT_MOC_LITERAL(10, 96, 3), // "val"
QT_MOC_LITERAL(11, 100, 22), // "showLeafLeftMouseClick"
QT_MOC_LITERAL(12, 123, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(13, 140, 23), // "showLeafRightMouseClick"
QT_MOC_LITERAL(14, 164, 3), // "pos"
QT_MOC_LITERAL(15, 168, 14) // "MakeRemoteLeaf"

    },
    "macTreeSys\0GiveLocalInfo\0\0infotype\0"
    "row\0col\0text\0showStackWidgetLocal\0"
    "showStackWidget\0McuInfo_t*\0val\0"
    "showLeafLeftMouseClick\0QTreeWidgetItem*\0"
    "showLeafRightMouseClick\0pos\0MakeRemoteLeaf"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_macTreeSys[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   44,    2, 0x06 /* Public */,
       7,    0,   53,    2, 0x06 /* Public */,
       8,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    2,   57,    2, 0x0a /* Public */,
      13,    1,   62,    2, 0x0a /* Public */,
      15,    1,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,    3,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QPoint,   14,
    QMetaType::Void, QMetaType::VoidStar,   10,

       0        // eod
};

void macTreeSys::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        macTreeSys *_t = static_cast<macTreeSys *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GiveLocalInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 1: _t->showStackWidgetLocal(); break;
        case 2: _t->showStackWidget((*reinterpret_cast< McuInfo_t*(*)>(_a[1]))); break;
        case 3: _t->showLeafLeftMouseClick((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->showLeafRightMouseClick((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->MakeRemoteLeaf((*reinterpret_cast< void*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (macTreeSys::*_t)(int , int , int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&macTreeSys::GiveLocalInfo)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (macTreeSys::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&macTreeSys::showStackWidgetLocal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (macTreeSys::*_t)(McuInfo_t * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&macTreeSys::showStackWidget)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject macTreeSys::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_macTreeSys.data,
      qt_meta_data_macTreeSys,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *macTreeSys::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *macTreeSys::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_macTreeSys.stringdata0))
        return static_cast<void*>(const_cast< macTreeSys*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int macTreeSys::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
void macTreeSys::GiveLocalInfo(int _t1, int _t2, int _t3, const QString & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void macTreeSys::showStackWidgetLocal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void macTreeSys::showStackWidget(McuInfo_t * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
