/****************************************************************************
** Meta object code from reading C++ file 'controllerinteraction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../PROJET_CDAA_GROUPE(AM) (2)/Final_Project_CDAA/Final_Project/CDAA_Project/controllerinteraction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controllerinteraction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ControllerInteraction_t {
    QByteArrayData data[6];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControllerInteraction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControllerInteraction_t qt_meta_stringdata_ControllerInteraction = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ControllerInteraction"
QT_MOC_LITERAL(1, 22, 16), // "AjoutInteraction"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 27), // "signalOuvrirPageInteraction"
QT_MOC_LITERAL(4, 68, 12), // "Interaction*"
QT_MOC_LITERAL(5, 81, 8) // "interact"

    },
    "ControllerInteraction\0AjoutInteraction\0"
    "\0signalOuvrirPageInteraction\0Interaction*\0"
    "interact"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControllerInteraction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void ControllerInteraction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControllerInteraction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AjoutInteraction(); break;
        case 1: _t->signalOuvrirPageInteraction((*reinterpret_cast< Interaction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ControllerInteraction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerInteraction::AjoutInteraction)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ControllerInteraction::*)(Interaction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerInteraction::signalOuvrirPageInteraction)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ControllerInteraction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ControllerInteraction.data,
    qt_meta_data_ControllerInteraction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ControllerInteraction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControllerInteraction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControllerInteraction.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ControllerInteraction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ControllerInteraction::AjoutInteraction()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ControllerInteraction::signalOuvrirPageInteraction(Interaction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
