/****************************************************************************
** Meta object code from reading C++ file 'roomitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../view/roomitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roomitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RoomItem_t {
    QByteArrayData data[6];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoomItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoomItem_t qt_meta_stringdata_RoomItem = {
    {
QT_MOC_LITERAL(0, 0, 8), // "RoomItem"
QT_MOC_LITERAL(1, 9, 22), // "joinPushButton_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "room_id"
QT_MOC_LITERAL(4, 41, 9), // "isPrivate"
QT_MOC_LITERAL(5, 51, 25) // "on_joinPushButton_clicked"

    },
    "RoomItem\0joinPushButton_clicked\0\0"
    "room_id\0isPrivate\0on_joinPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoomItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void RoomItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoomItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->joinPushButton_clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->on_joinPushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RoomItem::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomItem::joinPushButton_clicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RoomItem::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_RoomItem.data,
    qt_meta_data_RoomItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RoomItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoomItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoomItem.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RoomItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void RoomItem::joinPushButton_clicked(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
