/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../view/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[325];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 22), // "redirectToWaittingRoom"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 18), // "checkRoomAcceptPms"
QT_MOC_LITERAL(4, 54, 7), // "room_id"
QT_MOC_LITERAL(5, 62, 9), // "isPrivate"
QT_MOC_LITERAL(6, 72, 20), // "handleServerResponse"
QT_MOC_LITERAL(7, 93, 8), // "response"
QT_MOC_LITERAL(8, 102, 4), // "data"
QT_MOC_LITERAL(9, 107, 27), // "on_createExamButton_clicked"
QT_MOC_LITERAL(10, 135, 22), // "on_leaveButton_clicked"
QT_MOC_LITERAL(11, 158, 25), // "on_examPushButton_clicked"
QT_MOC_LITERAL(12, 184, 29), // "on_practicePushButton_clicked"
QT_MOC_LITERAL(13, 214, 28), // "on_historyPushButton_clicked"
QT_MOC_LITERAL(14, 243, 22), // "on_readyButton_clicked"
QT_MOC_LITERAL(15, 266, 31), // "on_createPracticeButton_clicked"
QT_MOC_LITERAL(16, 298, 26) // "on_statisticButton_clicked"

    },
    "MainWindow\0redirectToWaittingRoom\0\0"
    "checkRoomAcceptPms\0room_id\0isPrivate\0"
    "handleServerResponse\0response\0data\0"
    "on_createExamButton_clicked\0"
    "on_leaveButton_clicked\0on_examPushButton_clicked\0"
    "on_practicePushButton_clicked\0"
    "on_historyPushButton_clicked\0"
    "on_readyButton_clicked\0"
    "on_createPracticeButton_clicked\0"
    "on_statisticButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    2,   70,    2, 0x0a /* Public */,
       6,    2,   75,    2, 0x0a /* Public */,
       9,    0,   80,    2, 0x08 /* Private */,
      10,    0,   81,    2, 0x08 /* Private */,
      11,    0,   82,    2, 0x08 /* Private */,
      12,    0,   83,    2, 0x08 /* Private */,
      13,    0,   84,    2, 0x08 /* Private */,
      14,    0,   85,    2, 0x08 /* Private */,
      15,    0,   86,    2, 0x08 /* Private */,
      16,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    7,    8,
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
        case 0: _t->redirectToWaittingRoom(); break;
        case 1: _t->checkRoomAcceptPms((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->handleServerResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: _t->on_createExamButton_clicked(); break;
        case 4: _t->on_leaveButton_clicked(); break;
        case 5: _t->on_examPushButton_clicked(); break;
        case 6: _t->on_practicePushButton_clicked(); break;
        case 7: _t->on_historyPushButton_clicked(); break;
        case 8: _t->on_readyButton_clicked(); break;
        case 9: _t->on_createPracticeButton_clicked(); break;
        case 10: _t->on_statisticButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
