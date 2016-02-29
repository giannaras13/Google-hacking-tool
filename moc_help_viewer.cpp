/****************************************************************************
** Meta object code from reading C++ file 'help_viewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Google-Hacking/help_viewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'help_viewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_help_viewer_t {
    QByteArrayData data[17];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_help_viewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_help_viewer_t qt_meta_stringdata_help_viewer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "help_viewer"
QT_MOC_LITERAL(1, 12, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 4), // "arg1"
QT_MOC_LITERAL(4, 50, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(5, 72, 5), // "index"
QT_MOC_LITERAL(6, 78, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 102, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 124, 24), // "on_help_viewer_destroyed"
QT_MOC_LITERAL(9, 149, 10), // "closeEvent"
QT_MOC_LITERAL(10, 160, 12), // "QCloseEvent*"
QT_MOC_LITERAL(11, 173, 5), // "event"
QT_MOC_LITERAL(12, 179, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(13, 203, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(14, 225, 23), // "on_pushButton_2_pressed"
QT_MOC_LITERAL(15, 249, 22), // "on_pushButton_released"
QT_MOC_LITERAL(16, 272, 24) // "on_pushButton_2_released"

    },
    "help_viewer\0on_comboBox_currentIndexChanged\0"
    "\0arg1\0on_comboBox_activated\0index\0"
    "on_pushButton_2_clicked\0on_pushButton_clicked\0"
    "on_help_viewer_destroyed\0closeEvent\0"
    "QCloseEvent*\0event\0on_pushButton_3_clicked\0"
    "on_pushButton_pressed\0on_pushButton_2_pressed\0"
    "on_pushButton_released\0on_pushButton_2_released"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_help_viewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    1,   77,    2, 0x08 /* Private */,
       1,    1,   80,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    1,   86,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,
      15,    0,   92,    2, 0x08 /* Private */,
      16,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void help_viewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        help_viewer *_t = static_cast<help_viewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        //case 0: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        //case 1: _t->on_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        //case 2: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_help_viewer_destroyed(); break;
        case 6: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_3_clicked(); break;
        case 8: _t->on_pushButton_pressed(); break;
        case 9: _t->on_pushButton_2_pressed(); break;
        case 10: _t->on_pushButton_released(); break;
        case 11: _t->on_pushButton_2_released(); break;
        default: ;
        }
    }
}

const QMetaObject help_viewer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_help_viewer.data,
      qt_meta_data_help_viewer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *help_viewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *help_viewer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_help_viewer.stringdata0))
        return static_cast<void*>(const_cast< help_viewer*>(this));
    return QDialog::qt_metacast(_clname);
}

int help_viewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
