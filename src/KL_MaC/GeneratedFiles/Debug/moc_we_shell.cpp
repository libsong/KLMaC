/****************************************************************************
** Meta object code from reading C++ file 'we_shell.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../we_shell.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'we_shell.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWorker_ssh_t {
    QByteArrayData data[6];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWorker_ssh_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWorker_ssh_t qt_meta_stringdata_QWorker_ssh = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QWorker_ssh"
QT_MOC_LITERAL(1, 12, 17), // "sshRemoteResponse"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "str"
QT_MOC_LITERAL(4, 35, 4), // "Exec"
QT_MOC_LITERAL(5, 40, 3) // "cmd"

    },
    "QWorker_ssh\0sshRemoteResponse\0\0str\0"
    "Exec\0cmd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWorker_ssh[] = {

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
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void QWorker_ssh::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWorker_ssh *_t = static_cast<QWorker_ssh *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sshRemoteResponse((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->Exec((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QWorker_ssh::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWorker_ssh::sshRemoteResponse)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QWorker_ssh::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWorker_ssh.data,
      qt_meta_data_QWorker_ssh,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QWorker_ssh::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWorker_ssh::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QWorker_ssh.stringdata0))
        return static_cast<void*>(const_cast< QWorker_ssh*>(this));
    return QObject::qt_metacast(_clname);
}

int QWorker_ssh::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QWorker_ssh::sshRemoteResponse(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_macShell_t {
    QByteArrayData data[12];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_macShell_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_macShell_t qt_meta_stringdata_macShell = {
    {
QT_MOC_LITERAL(0, 0, 8), // "macShell"
QT_MOC_LITERAL(1, 9, 14), // "giveRemoteInfo"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 2), // "ip"
QT_MOC_LITERAL(4, 28, 3), // "usr"
QT_MOC_LITERAL(5, 32, 3), // "pwd"
QT_MOC_LITERAL(6, 36, 11), // "giveCmdLine"
QT_MOC_LITERAL(7, 48, 3), // "cmd"
QT_MOC_LITERAL(8, 52, 14), // "remoteResponse"
QT_MOC_LITERAL(9, 67, 3), // "str"
QT_MOC_LITERAL(10, 71, 23), // "onScrollBarValueChanged"
QT_MOC_LITERAL(11, 95, 14) // "onEditFinished"

    },
    "macShell\0giveRemoteInfo\0\0ip\0usr\0pwd\0"
    "giveCmdLine\0cmd\0remoteResponse\0str\0"
    "onScrollBarValueChanged\0onEditFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_macShell[] = {

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
       1,    3,   39,    2, 0x06 /* Public */,
       6,    1,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   49,    2, 0x0a /* Public */,
      10,    0,   52,    2, 0x08 /* Private */,
      11,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void macShell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        macShell *_t = static_cast<macShell *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->giveRemoteInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->giveCmdLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->remoteResponse((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->onScrollBarValueChanged(); break;
        case 4: _t->onEditFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (macShell::*_t)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&macShell::giveRemoteInfo)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (macShell::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&macShell::giveCmdLine)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject macShell::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_macShell.data,
      qt_meta_data_macShell,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *macShell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *macShell::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_macShell.stringdata0))
        return static_cast<void*>(const_cast< macShell*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int macShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
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
void macShell::giveRemoteInfo(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void macShell::giveCmdLine(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
