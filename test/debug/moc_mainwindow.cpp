/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 8), // "dealfind"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "input"
QT_MOC_LITERAL(4, 27, 9), // "deallogin"
QT_MOC_LITERAL(5, 37, 8), // "username"
QT_MOC_LITERAL(6, 46, 21), // "on_Staction_triggered"
QT_MOC_LITERAL(7, 68, 21), // "on_Acaction_triggered"
QT_MOC_LITERAL(8, 90, 23), // "on_nameaction_triggered"
QT_MOC_LITERAL(9, 114, 21), // "on_idaction_triggered"
QT_MOC_LITERAL(10, 136, 22), // "on_addaction_triggered"
QT_MOC_LITERAL(11, 159, 25), // "on_deleteaction_triggered"
QT_MOC_LITERAL(12, 185, 27), // "on_ScoreStaaction_triggered"
QT_MOC_LITERAL(13, 213, 27), // "on_Rankmathaction_triggered"
QT_MOC_LITERAL(14, 241, 30), // "on_Rankchineseaction_triggered"
QT_MOC_LITERAL(15, 272, 28) // "on_Ranktotalaction_triggered"

    },
    "MainWindow\0dealfind\0\0input\0deallogin\0"
    "username\0on_Staction_triggered\0"
    "on_Acaction_triggered\0on_nameaction_triggered\0"
    "on_idaction_triggered\0on_addaction_triggered\0"
    "on_deleteaction_triggered\0"
    "on_ScoreStaaction_triggered\0"
    "on_Rankmathaction_triggered\0"
    "on_Rankchineseaction_triggered\0"
    "on_Ranktotalaction_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       4,    1,   77,    2, 0x0a /* Public */,
       6,    0,   80,    2, 0x08 /* Private */,
       7,    0,   81,    2, 0x08 /* Private */,
       8,    0,   82,    2, 0x08 /* Private */,
       9,    0,   83,    2, 0x08 /* Private */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    0,   88,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dealfind((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->deallogin((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_Staction_triggered(); break;
        case 3: _t->on_Acaction_triggered(); break;
        case 4: _t->on_nameaction_triggered(); break;
        case 5: _t->on_idaction_triggered(); break;
        case 6: _t->on_addaction_triggered(); break;
        case 7: _t->on_deleteaction_triggered(); break;
        case 8: _t->on_ScoreStaaction_triggered(); break;
        case 9: _t->on_Rankmathaction_triggered(); break;
        case 10: _t->on_Rankchineseaction_triggered(); break;
        case 11: _t->on_Ranktotalaction_triggered(); break;
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
