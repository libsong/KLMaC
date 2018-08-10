/****************************************************************************
** Meta object code from reading C++ file 'RepaintControl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RepaintControl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RepaintControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SwitchControl_t {
    QByteArrayData data[5];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SwitchControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SwitchControl_t qt_meta_stringdata_SwitchControl = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SwitchControl"
QT_MOC_LITERAL(1, 14, 7), // "toggled"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "checked"
QT_MOC_LITERAL(4, 31, 9) // "onTimeout"

    },
    "SwitchControl\0toggled\0\0checked\0onTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SwitchControl[] = {

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
       4,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SwitchControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SwitchControl *_t = static_cast<SwitchControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SwitchControl::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SwitchControl::toggled)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SwitchControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SwitchControl.data,
      qt_meta_data_SwitchControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SwitchControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SwitchControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SwitchControl.stringdata0))
        return static_cast<void*>(const_cast< SwitchControl*>(this));
    return QWidget::qt_metacast(_clname);
}

int SwitchControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void SwitchControl::toggled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SwitchButton_t {
    QByteArrayData data[29];
    char stringdata0[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SwitchButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SwitchButton_t qt_meta_stringdata_SwitchButton = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SwitchButton"
QT_MOC_LITERAL(1, 13, 14), // "checkedChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "checked"
QT_MOC_LITERAL(4, 37, 3), // "idx"
QT_MOC_LITERAL(5, 41, 11), // "updateValue"
QT_MOC_LITERAL(6, 53, 10), // "setChecked"
QT_MOC_LITERAL(7, 64, 14), // "setButtonStyle"
QT_MOC_LITERAL(8, 79, 11), // "ButtonStyle"
QT_MOC_LITERAL(9, 91, 11), // "buttonStyle"
QT_MOC_LITERAL(10, 103, 10), // "setBgColor"
QT_MOC_LITERAL(11, 114, 10), // "bgColorOff"
QT_MOC_LITERAL(12, 125, 9), // "bgColorOn"
QT_MOC_LITERAL(13, 135, 14), // "setSliderColor"
QT_MOC_LITERAL(14, 150, 14), // "sliderColorOff"
QT_MOC_LITERAL(15, 165, 13), // "sliderColorOn"
QT_MOC_LITERAL(16, 179, 12), // "setTextColor"
QT_MOC_LITERAL(17, 192, 12), // "textColorOff"
QT_MOC_LITERAL(18, 205, 11), // "textColorOn"
QT_MOC_LITERAL(19, 217, 7), // "setText"
QT_MOC_LITERAL(20, 225, 7), // "textOff"
QT_MOC_LITERAL(21, 233, 6), // "textOn"
QT_MOC_LITERAL(22, 240, 8), // "setImage"
QT_MOC_LITERAL(23, 249, 8), // "imageOff"
QT_MOC_LITERAL(24, 258, 7), // "imageOn"
QT_MOC_LITERAL(25, 266, 8), // "setSpace"
QT_MOC_LITERAL(26, 275, 5), // "space"
QT_MOC_LITERAL(27, 281, 13), // "setRectRadius"
QT_MOC_LITERAL(28, 295, 10) // "rectRadius"

    },
    "SwitchButton\0checkedChanged\0\0checked\0"
    "idx\0updateValue\0setChecked\0setButtonStyle\0"
    "ButtonStyle\0buttonStyle\0setBgColor\0"
    "bgColorOff\0bgColorOn\0setSliderColor\0"
    "sliderColorOff\0sliderColorOn\0setTextColor\0"
    "textColorOff\0textColorOn\0setText\0"
    "textOff\0textOn\0setImage\0imageOff\0"
    "imageOn\0setSpace\0space\0setRectRadius\0"
    "rectRadius"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SwitchButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   74,    2, 0x08 /* Private */,
       6,    1,   75,    2, 0x0a /* Public */,
       7,    1,   78,    2, 0x0a /* Public */,
      10,    2,   81,    2, 0x0a /* Public */,
      13,    2,   86,    2, 0x0a /* Public */,
      16,    2,   91,    2, 0x0a /* Public */,
      19,    2,   96,    2, 0x0a /* Public */,
      22,    2,  101,    2, 0x0a /* Public */,
      25,    1,  106,    2, 0x0a /* Public */,
      27,    1,  109,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QColor, QMetaType::QColor,   11,   12,
    QMetaType::Void, QMetaType::QColor, QMetaType::QColor,   14,   15,
    QMetaType::Void, QMetaType::QColor, QMetaType::QColor,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   20,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   23,   24,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, QMetaType::Int,   28,

       0        // eod
};

void SwitchButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SwitchButton *_t = static_cast<SwitchButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkedChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->updateValue(); break;
        case 2: _t->setChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setButtonStyle((*reinterpret_cast< ButtonStyle(*)>(_a[1]))); break;
        case 4: _t->setBgColor((*reinterpret_cast< QColor(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 5: _t->setSliderColor((*reinterpret_cast< QColor(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 6: _t->setTextColor((*reinterpret_cast< QColor(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 7: _t->setText((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->setImage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->setSpace((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setRectRadius((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SwitchButton::*_t)(bool , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SwitchButton::checkedChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SwitchButton::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SwitchButton.data,
      qt_meta_data_SwitchButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SwitchButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SwitchButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SwitchButton.stringdata0))
        return static_cast<void*>(const_cast< SwitchButton*>(this));
    return QWidget::qt_metacast(_clname);
}

int SwitchButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void SwitchButton::checkedChanged(bool _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
