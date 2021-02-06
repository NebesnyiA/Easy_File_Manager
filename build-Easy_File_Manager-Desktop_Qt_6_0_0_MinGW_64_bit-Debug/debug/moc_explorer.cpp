/****************************************************************************
** Meta object code from reading C++ file 'explorer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Easy_File_Manager/explorer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'explorer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Explorer_t {
    const uint offsetsAndSize[32];
    char stringdata0[513];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Explorer_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Explorer_t qt_meta_stringdata_Explorer = {
    {
QT_MOC_LITERAL(0, 8), // "Explorer"
QT_MOC_LITERAL(9, 24), // "on_Win_One_doubleClicked"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 11), // "QModelIndex"
QT_MOC_LITERAL(47, 5), // "index"
QT_MOC_LITERAL(53, 24), // "on_Win_Two_doubleClicked"
QT_MOC_LITERAL(78, 29), // "on_actionNew_Folder_triggered"
QT_MOC_LITERAL(108, 25), // "on_actionRemove_triggered"
QT_MOC_LITERAL(134, 47), // "on_actionNew_Folder_for_secon..."
QT_MOC_LITERAL(182, 43), // "on_actionRemove_for_second_wi..."
QT_MOC_LITERAL(226, 46), // "on_actionRename_for_the_first..."
QT_MOC_LITERAL(273, 43), // "on_actionRename_for_second_wi..."
QT_MOC_LITERAL(317, 53), // "on_actionMove_the_file_for_th..."
QT_MOC_LITERAL(371, 50), // "on_actionMove_the_file_for_se..."
QT_MOC_LITERAL(422, 44), // "on_actionCopy_fot_the_first_w..."
QT_MOC_LITERAL(467, 45) // "on_actionCopy_for_the_second_..."

    },
    "Explorer\0on_Win_One_doubleClicked\0\0"
    "QModelIndex\0index\0on_Win_Two_doubleClicked\0"
    "on_actionNew_Folder_triggered\0"
    "on_actionRemove_triggered\0"
    "on_actionNew_Folder_for_second_window_triggered\0"
    "on_actionRemove_for_second_window_triggered\0"
    "on_actionRename_for_the_first_window_triggered\0"
    "on_actionRename_for_second_window_triggered\0"
    "on_actionMove_the_file_for_the_first_window_triggered\0"
    "on_actionMove_the_file_for_second_window_triggered\0"
    "on_actionCopy_fot_the_first_window_triggered\0"
    "on_actionCopy_for_the_second_window_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Explorer[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x08,    0 /* Private */,
       5,    1,   89,    2, 0x08,    2 /* Private */,
       6,    0,   92,    2, 0x08,    4 /* Private */,
       7,    0,   93,    2, 0x08,    5 /* Private */,
       8,    0,   94,    2, 0x08,    6 /* Private */,
       9,    0,   95,    2, 0x08,    7 /* Private */,
      10,    0,   96,    2, 0x08,    8 /* Private */,
      11,    0,   97,    2, 0x08,    9 /* Private */,
      12,    0,   98,    2, 0x08,   10 /* Private */,
      13,    0,   99,    2, 0x08,   11 /* Private */,
      14,    0,  100,    2, 0x08,   12 /* Private */,
      15,    0,  101,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
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

void Explorer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Explorer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Win_One_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_Win_Two_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_actionNew_Folder_triggered(); break;
        case 3: _t->on_actionRemove_triggered(); break;
        case 4: _t->on_actionNew_Folder_for_second_window_triggered(); break;
        case 5: _t->on_actionRemove_for_second_window_triggered(); break;
        case 6: _t->on_actionRename_for_the_first_window_triggered(); break;
        case 7: _t->on_actionRename_for_second_window_triggered(); break;
        case 8: _t->on_actionMove_the_file_for_the_first_window_triggered(); break;
        case 9: _t->on_actionMove_the_file_for_second_window_triggered(); break;
        case 10: _t->on_actionCopy_fot_the_first_window_triggered(); break;
        case 11: _t->on_actionCopy_for_the_second_window_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject Explorer::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Explorer.offsetsAndSize,
    qt_meta_data_Explorer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Explorer_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Explorer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Explorer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Explorer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Explorer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
