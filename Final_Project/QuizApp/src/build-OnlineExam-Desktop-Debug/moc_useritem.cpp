/****************************************************************************
** Meta object code from reading C++ file 'useritem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../view/useritem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'useritem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserItem_t {
    QByteArrayData data[9];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserItem_t qt_meta_stringdata_UserItem = {
    {
QT_MOC_LITERAL(0, 0, 8), // "UserItem"
QT_MOC_LITERAL(1, 9, 20), // "deleteButton_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "userId"
QT_MOC_LITERAL(4, 38, 19), // "blockButton_clicked"
QT_MOC_LITERAL(5, 58, 21), // "unBlockButton_clicked"
QT_MOC_LITERAL(6, 80, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(7, 104, 24), // "on_unBlockButton_clicked"
QT_MOC_LITERAL(8, 129, 22) // "on_blockButton_clicked"

    },
    "UserItem\0deleteButton_clicked\0\0userId\0"
    "blockButton_clicked\0unBlockButton_clicked\0"
    "on_deleteButton_clicked\0"
    "on_unBlockButton_clicked\0"
    "on_blockButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UserItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteButton_clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->blockButton_clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->unBlockButton_clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_deleteButton_clicked(); break;
        case 4: _t->on_unBlockButton_clicked(); break;
        case 5: _t->on_blockButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserItem::deleteButton_clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserItem::blockButton_clicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UserItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserItem::unBlockButton_clicked)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UserItem::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_UserItem.data,
    qt_meta_data_UserItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UserItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserItem.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UserItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void UserItem::deleteButton_clicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UserItem::blockButton_clicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UserItem::unBlockButton_clicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
