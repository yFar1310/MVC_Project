/****************************************************************************
** Meta object code from reading C++ file 'widgetinteractionpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../PROJET_CDAA_GROUPE(AM) (2)/Final_Project_CDAA/Final_Project/CDAA_Project/widgetinteractionpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetinteractionpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WidgetInteractionPage_t {
    QByteArrayData data[7];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetInteractionPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetInteractionPage_t qt_meta_stringdata_WidgetInteractionPage = {
    {
QT_MOC_LITERAL(0, 0, 21), // "WidgetInteractionPage"
QT_MOC_LITERAL(1, 22, 21), // "OuvrirPageInteraction"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 12), // "Interaction*"
QT_MOC_LITERAL(4, 58, 8), // "interact"
QT_MOC_LITERAL(5, 67, 31), // "on_actionAjouter_Todo_triggered"
QT_MOC_LITERAL(6, 99, 18) // "RefreshInteraction"

    },
    "WidgetInteractionPage\0OuvrirPageInteraction\0"
    "\0Interaction*\0interact\0"
    "on_actionAjouter_Todo_triggered\0"
    "RefreshInteraction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetInteractionPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    0,   32,    2, 0x08 /* Private */,
       6,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WidgetInteractionPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WidgetInteractionPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OuvrirPageInteraction((*reinterpret_cast< Interaction*(*)>(_a[1]))); break;
        case 1: _t->on_actionAjouter_Todo_triggered(); break;
        case 2: _t->RefreshInteraction(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WidgetInteractionPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_WidgetInteractionPage.data,
    qt_meta_data_WidgetInteractionPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WidgetInteractionPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetInteractionPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetInteractionPage.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int WidgetInteractionPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
