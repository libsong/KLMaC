/****************************************************************************
** Meta object code from reading C++ file 'menu_button.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../menu_button.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu_button.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_macMenuButton_t {
    QByteArrayData data[11];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_macMenuButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_macMenuButton_t qt_meta_stringdata_macMenuButton = {
    {
QT_MOC_LITERAL(0, 0, 13), // "macMenuButton"
QT_MOC_LITERAL(1, 14, 17), // "showSettingDialog"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "showNewCharacter"
QT_MOC_LITERAL(4, 50, 11), // "showAboutUs"
QT_MOC_LITERAL(5, 62, 8), // "showMenu"
QT_MOC_LITERAL(6, 71, 11), // "actionSlots"
QT_MOC_LITERAL(7, 83, 7), // "makeSsh"
QT_MOC_LITERAL(8, 91, 2), // "ip"
QT_MOC_LITERAL(9, 94, 3), // "usr"
QT_MOC_LITERAL(10, 98, 3) // "pwd"

    },
    "macMenuButton\0showSettingDialog\0\0"
    "showNewCharacter\0showAboutUs\0showMenu\0"
    "actionSlots\0makeSsh\0ip\0usr\0pwd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_macMenuButton[] = {

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
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x09 /* Protected */,
       6,    0,   48,    2, 0x09 /* Protected */,
       7,    3,   49,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,    9,   10,

       0        // eod
};

void macMenuButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        macMenuButton *_t = static_cast<macMenuButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showSettingDialog(); break;
        case 1: _t->showNewCharacter(); break;
        case 2: _t->showAboutUs(); break;
        case 3: _t->showMenu(); break;
        case 4: _t->actionSlots(); break;
        case 5: _t->makeSsh((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (macMenuButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&macMenuButton::showSettingDialog)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (macMenuButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&macMenuButton::showNewCharacter)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (macMenuButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&macMenuButton::showAboutUs)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject macMenuButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_macMenuButton.data,
      qt_meta_data_macMenuButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *macMenuButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *macMenuButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_macMenuButton.stringdata0))
        return static_cast<void*>(const_cast< macMenuButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int macMenuButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
void macMenuButton::showSettingDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void macMenuButton::showNewCharacter()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void macMenuButton::showAboutUs()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
struct qt_meta_stringdata_macLogin_t {
    QByteArrayData data[10];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_macLogin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_macLogin_t qt_meta_stringdata_macLogin = {
    {
QT_MOC_LITERAL(0, 0, 8), // "macLogin"
QT_MOC_LITERAL(1, 9, 16), // "makeSshTerminate"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 2), // "ip"
QT_MOC_LITERAL(4, 30, 3), // "usr"
QT_MOC_LITERAL(5, 34, 3), // "pwd"
QT_MOC_LITERAL(6, 38, 21), // "on_Rem_Passwd_clicked"
QT_MOC_LITERAL(7, 60, 21), // "on_Autoin_Log_clicked"
QT_MOC_LITERAL(8, 82, 20), // "on_btn_login_clicked"
QT_MOC_LITERAL(9, 103, 9) // "QuitLogin"

    },
    "macLogin\0makeSshTerminate\0\0ip\0usr\0pwd\0"
    "on_Rem_Passwd_clicked\0on_Autoin_Log_clicked\0"
    "on_btn_login_clicked\0QuitLogin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_macLogin[] = {

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
       1,    3,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   46,    2, 0x0a /* Public */,
       7,    0,   47,    2, 0x0a /* Public */,
       8,    0,   48,    2, 0x0a /* Public */,
       9,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void macLogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        macLogin *_t = static_cast<macLogin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->makeSshTerminate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->on_Rem_Passwd_clicked(); break;
        case 2: _t->on_Autoin_Log_clicked(); break;
        case 3: _t->on_btn_login_clicked(); break;
        case 4: _t->QuitLogin(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (macLogin::*_t)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&macLogin::makeSshTerminate)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject macLogin::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_macLogin.data,
      qt_meta_data_macLogin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *macLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *macLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_macLogin.stringdata0))
        return static_cast<void*>(const_cast< macLogin*>(this));
    return QDialog::qt_metacast(_clname);
}

int macLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void macLogin::makeSshTerminate(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
