/****************************************************************************
** Meta object code from reading C++ file 'window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Interface/window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Window_t {
    QByteArrayData data[20];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Window_t qt_meta_stringdata_Window = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Window"
QT_MOC_LITERAL(1, 7, 24), // "on_Authorization_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "on_Cancel_clicked"
QT_MOC_LITERAL(4, 51, 13), // "on_OK_clicked"
QT_MOC_LITERAL(5, 65, 23), // "on_Registretion_clicked"
QT_MOC_LITERAL(6, 89, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(7, 111, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(8, 133, 5), // "check"
QT_MOC_LITERAL(9, 139, 11), // "std::string"
QT_MOC_LITERAL(10, 151, 4), // "pass"
QT_MOC_LITERAL(11, 156, 20), // "on_education_clicked"
QT_MOC_LITERAL(12, 177, 23), // "on_buttonBox_2_accepted"
QT_MOC_LITERAL(13, 201, 11), // "MyTcpClient"
QT_MOC_LITERAL(14, 213, 14), // "disMyTcpClient"
QT_MOC_LITERAL(15, 228, 14), // "slot_connected"
QT_MOC_LITERAL(16, 243, 14), // "slot_readyRead"
QT_MOC_LITERAL(17, 258, 19), // "slot_send_to_server"
QT_MOC_LITERAL(18, 278, 7), // "message"
QT_MOC_LITERAL(19, 286, 17) // "slot_disconnected"

    },
    "Window\0on_Authorization_clicked\0\0"
    "on_Cancel_clicked\0on_OK_clicked\0"
    "on_Registretion_clicked\0on_buttonBox_accepted\0"
    "on_buttonBox_rejected\0check\0std::string\0"
    "pass\0on_education_clicked\0"
    "on_buttonBox_2_accepted\0MyTcpClient\0"
    "disMyTcpClient\0slot_connected\0"
    "slot_readyRead\0slot_send_to_server\0"
    "message\0slot_disconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Window[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    1,   95,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x0a /* Public */,
      14,    0,  101,    2, 0x0a /* Public */,
      15,    0,  102,    2, 0x0a /* Public */,
      16,    0,  103,    2, 0x0a /* Public */,
      17,    1,  104,    2, 0x0a /* Public */,
      19,    0,  107,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,

       0        // eod
};

void Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Authorization_clicked(); break;
        case 1: _t->on_Cancel_clicked(); break;
        case 2: _t->on_OK_clicked(); break;
        case 3: _t->on_Registretion_clicked(); break;
        case 4: _t->on_buttonBox_accepted(); break;
        case 5: _t->on_buttonBox_rejected(); break;
        case 6: { bool _r = _t->check((*reinterpret_cast< std::string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->on_education_clicked(); break;
        case 8: _t->on_buttonBox_2_accepted(); break;
        case 9: _t->MyTcpClient(); break;
        case 10: _t->disMyTcpClient(); break;
        case 11: _t->slot_connected(); break;
        case 12: _t->slot_readyRead(); break;
        case 13: _t->slot_send_to_server((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->slot_disconnected(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Window::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Window.data,
    qt_meta_data_Window,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Window.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
