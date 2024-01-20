/****************************************************************************
** Meta object code from reading C++ file 'controllercontact.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../PROJET_CDAA_GROUPE(AM) (2)/Final_Project_CDAA/Final_Project/CDAA_Project/controllercontact.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controllercontact.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ControllerContact_t {
    QByteArrayData data[11];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControllerContact_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControllerContact_t qt_meta_stringdata_ControllerContact = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ControllerContact"
QT_MOC_LITERAL(1, 18, 28), // "signalListeContactsMiseAJour"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 20), // "signalUpdateContacts"
QT_MOC_LITERAL(4, 69, 23), // "signalOuvrirPageContact"
QT_MOC_LITERAL(5, 93, 7), // "Contact"
QT_MOC_LITERAL(6, 101, 1), // "c"
QT_MOC_LITERAL(7, 103, 17), // "signalInfoContact"
QT_MOC_LITERAL(8, 121, 13), // "ContactUpdate"
QT_MOC_LITERAL(9, 135, 25), // "TrierContactsAlphabetique"
QT_MOC_LITERAL(10, 161, 21) // "TrierContactsCreation"

    },
    "ControllerContact\0signalListeContactsMiseAJour\0"
    "\0signalUpdateContacts\0signalOuvrirPageContact\0"
    "Contact\0c\0signalInfoContact\0ContactUpdate\0"
    "TrierContactsAlphabetique\0"
    "TrierContactsCreation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControllerContact[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x06 /* Public */,
       7,    1,   54,    2, 0x06 /* Public */,
       8,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   60,    2, 0x0a /* Public */,
      10,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ControllerContact::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControllerContact *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalListeContactsMiseAJour(); break;
        case 1: _t->signalUpdateContacts(); break;
        case 2: _t->signalOuvrirPageContact((*reinterpret_cast< Contact(*)>(_a[1]))); break;
        case 3: _t->signalInfoContact((*reinterpret_cast< Contact(*)>(_a[1]))); break;
        case 4: _t->ContactUpdate((*reinterpret_cast< Contact(*)>(_a[1]))); break;
        case 5: _t->TrierContactsAlphabetique(); break;
        case 6: _t->TrierContactsCreation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ControllerContact::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerContact::signalListeContactsMiseAJour)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ControllerContact::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerContact::signalUpdateContacts)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ControllerContact::*)(Contact );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerContact::signalOuvrirPageContact)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ControllerContact::*)(Contact );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerContact::signalInfoContact)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ControllerContact::*)(Contact );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerContact::ContactUpdate)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ControllerContact::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ControllerContact.data,
    qt_meta_data_ControllerContact,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ControllerContact::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControllerContact::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControllerContact.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ControllerContact::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ControllerContact::signalListeContactsMiseAJour()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ControllerContact::signalUpdateContacts()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ControllerContact::signalOuvrirPageContact(Contact _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ControllerContact::signalInfoContact(Contact _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ControllerContact::ContactUpdate(Contact _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
