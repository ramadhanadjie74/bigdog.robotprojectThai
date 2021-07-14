/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[423];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 33), // "on_verticalSlider_actionTrigg..."
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 6), // "action"
QT_MOC_LITERAL(4, 53, 35), // "on_verticalSlider_2_actionTri..."
QT_MOC_LITERAL(5, 89, 35), // "on_verticalSlider_3_actionTri..."
QT_MOC_LITERAL(6, 125, 18), // "on_FORWARD_clicked"
QT_MOC_LITERAL(7, 144, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 166, 19), // "on_BACKWARD_clicked"
QT_MOC_LITERAL(9, 186, 15), // "on_LEFT_clicked"
QT_MOC_LITERAL(10, 202, 16), // "on_RIGHT_clicked"
QT_MOC_LITERAL(11, 219, 30), // "on_verticalSlider_valueChanged"
QT_MOC_LITERAL(12, 250, 5), // "value"
QT_MOC_LITERAL(13, 256, 32), // "on_verticalSlider_2_valueChanged"
QT_MOC_LITERAL(14, 289, 32), // "on_verticalSlider_3_valueChanged"
QT_MOC_LITERAL(15, 322, 14), // "on_one_clicked"
QT_MOC_LITERAL(16, 337, 14), // "on_two_clicked"
QT_MOC_LITERAL(17, 352, 14), // "on_tri_clicked"
QT_MOC_LITERAL(18, 367, 15), // "on_four_clicked"
QT_MOC_LITERAL(19, 383, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(20, 407, 15) // "on_five_clicked"

    },
    "MainWindow\0on_verticalSlider_actionTriggered\0"
    "\0action\0on_verticalSlider_2_actionTriggered\0"
    "on_verticalSlider_3_actionTriggered\0"
    "on_FORWARD_clicked\0on_pushButton_clicked\0"
    "on_BACKWARD_clicked\0on_LEFT_clicked\0"
    "on_RIGHT_clicked\0on_verticalSlider_valueChanged\0"
    "value\0on_verticalSlider_2_valueChanged\0"
    "on_verticalSlider_3_valueChanged\0"
    "on_one_clicked\0on_two_clicked\0"
    "on_tri_clicked\0on_four_clicked\0"
    "on_pushButton_3_clicked\0on_five_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x08 /* Private */,
       4,    1,  102,    2, 0x08 /* Private */,
       5,    1,  105,    2, 0x08 /* Private */,
       6,    0,  108,    2, 0x08 /* Private */,
       7,    0,  109,    2, 0x08 /* Private */,
       8,    0,  110,    2, 0x08 /* Private */,
       9,    0,  111,    2, 0x08 /* Private */,
      10,    0,  112,    2, 0x08 /* Private */,
      11,    1,  113,    2, 0x08 /* Private */,
      13,    1,  116,    2, 0x08 /* Private */,
      14,    1,  119,    2, 0x08 /* Private */,
      15,    0,  122,    2, 0x08 /* Private */,
      16,    0,  123,    2, 0x08 /* Private */,
      17,    0,  124,    2, 0x08 /* Private */,
      18,    0,  125,    2, 0x08 /* Private */,
      19,    0,  126,    2, 0x08 /* Private */,
      20,    0,  127,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
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
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 3: _t->on_FORWARD_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_BACKWARD_clicked(); break;
        case 6: _t->on_LEFT_clicked(); break;
        case 7: _t->on_RIGHT_clicked(); break;
        case 8: _t->on_verticalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_verticalSlider_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_verticalSlider_3_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_one_clicked(); break;
        case 12: _t->on_two_clicked(); break;
        case 13: _t->on_tri_clicked(); break;
        case 14: _t->on_four_clicked(); break;
        case 16: _t->on_five_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
