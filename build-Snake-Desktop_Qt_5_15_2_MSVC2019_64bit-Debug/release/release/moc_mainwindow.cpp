/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Snake/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[11];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 19), // "on_Beginbut_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 22), // "on_Instructbut_clicked"
QT_MOC_LITERAL(4, 55, 19), // "on_Gamerbut_toggled"
QT_MOC_LITERAL(5, 75, 7), // "checked"
QT_MOC_LITERAL(6, 83, 20), // "on_Mediumbut_toggled"
QT_MOC_LITERAL(7, 104, 18), // "on_Easybut_toggled"
QT_MOC_LITERAL(8, 123, 21), // "on_Player1but_toggled"
QT_MOC_LITERAL(9, 145, 21), // "on_Player2but_toggled"
QT_MOC_LITERAL(10, 167, 8) // "painting"

    },
    "MainWindow\0on_Beginbut_clicked\0\0"
    "on_Instructbut_clicked\0on_Gamerbut_toggled\0"
    "checked\0on_Mediumbut_toggled\0"
    "on_Easybut_toggled\0on_Player1but_toggled\0"
    "on_Player2but_toggled\0painting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    1,   56,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       7,    1,   62,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
       9,    1,   68,    2, 0x08 /* Private */,
      10,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Beginbut_clicked(); break;
        case 1: _t->on_Instructbut_clicked(); break;
        case 2: _t->on_Gamerbut_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_Mediumbut_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_Easybut_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_Player1but_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_Player2but_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->painting(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
