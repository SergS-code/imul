/****************************************************************************
** Meta object code from reading C++ file 'tcp_server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tcp_server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcp_server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Tcp_server_t {
    QByteArrayData data[13];
    char stringdata[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tcp_server_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tcp_server_t qt_meta_stringdata_Tcp_server = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 15),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 9),
QT_MOC_LITERAL(4, 38, 18),
QT_MOC_LITERAL(5, 57, 5),
QT_MOC_LITERAL(6, 63, 11),
QT_MOC_LITERAL(7, 75, 8),
QT_MOC_LITERAL(8, 84, 17),
QT_MOC_LITERAL(9, 102, 14),
QT_MOC_LITERAL(10, 117, 7),
QT_MOC_LITERAL(11, 125, 2),
QT_MOC_LITERAL(12, 128, 10)
    },
    "Tcp_server\0command_s_ether\0\0parameter\0"
    "command_s_ether_PJ\0adres\0QTcpSocket*\0"
    "proverka\0slotNewConnection\0slotReadClient\0"
    "send_to\0TO\0Answer_tcp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tcp_server[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       5,    1,   60,    2, 0x06 /* Public */,
       7,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   66,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x0a /* Public */,
      10,    1,   68,    2, 0x0a /* Public */,
      12,    0,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   11,
    QMetaType::Void,

       0        // eod
};

void Tcp_server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tcp_server *_t = static_cast<Tcp_server *>(_o);
        switch (_id) {
        case 0: _t->command_s_ether((*reinterpret_cast< parameter(*)>(_a[1]))); break;
        case 1: _t->command_s_ether_PJ((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->adres((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 3: _t->proverka((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotNewConnection(); break;
        case 5: _t->slotReadClient(); break;
        case 6: _t->send_to((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->Answer_tcp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Tcp_server::*_t)(parameter );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tcp_server::command_s_ether)) {
                *result = 0;
            }
        }
        {
            typedef void (Tcp_server::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tcp_server::command_s_ether_PJ)) {
                *result = 1;
            }
        }
        {
            typedef void (Tcp_server::*_t)(QTcpSocket * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tcp_server::adres)) {
                *result = 2;
            }
        }
        {
            typedef void (Tcp_server::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tcp_server::proverka)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject Tcp_server::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tcp_server.data,
      qt_meta_data_Tcp_server,  qt_static_metacall, 0, 0}
};


const QMetaObject *Tcp_server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tcp_server::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tcp_server.stringdata))
        return static_cast<void*>(const_cast< Tcp_server*>(this));
    return QObject::qt_metacast(_clname);
}

int Tcp_server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Tcp_server::command_s_ether(parameter _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tcp_server::command_s_ether_PJ(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tcp_server::adres(QTcpSocket * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tcp_server::proverka(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
