/****************************************************************************
** Meta object code from reading C++ file 'widgetlistescontacts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../PROJET_CDAA_GROUPE(AM) (2)/Final_Project_CDAA/Final_Project/CDAA_Project/widgetlistescontacts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetlistescontacts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WidgetListesContacts_t {
    QByteArrayData data[10];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetListesContacts_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetListesContacts_t qt_meta_stringdata_WidgetListesContacts = {
    {
QT_MOC_LITERAL(0, 0, 20), // "WidgetListesContacts"
QT_MOC_LITERAL(1, 21, 24), // "mettreAJourListeContacts"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 16), // "RechercheContact"
QT_MOC_LITERAL(4, 64, 19), // "AfficherPageContact"
QT_MOC_LITERAL(5, 84, 3), // "row"
QT_MOC_LITERAL(6, 88, 3), // "col"
QT_MOC_LITERAL(7, 92, 23), // "RechercheParIntervalles"
QT_MOC_LITERAL(8, 116, 47), // "on_actionTrier_Par_Ordre_Alph..."
QT_MOC_LITERAL(9, 164, 45) // "on_actionTrier_Par_Date_De_Cr..."

    },
    "WidgetListesContacts\0mettreAJourListeContacts\0"
    "\0RechercheContact\0AfficherPageContact\0"
    "row\0col\0RechercheParIntervalles\0"
    "on_actionTrier_Par_Ordre_Alphabetique_triggered\0"
    "on_actionTrier_Par_Date_De_Creation_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetListesContacts[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    2,   46,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x0a /* Public */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WidgetListesContacts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WidgetListesContacts *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mettreAJourListeContacts(); break;
        case 1: _t->RechercheContact(); break;
        case 2: _t->AfficherPageContact((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->RechercheParIntervalles(); break;
        case 4: _t->on_actionTrier_Par_Ordre_Alphabetique_triggered(); break;
        case 5: _t->on_actionTrier_Par_Date_De_Creation_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WidgetListesContacts::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_WidgetListesContacts.data,
    qt_meta_data_WidgetListesContacts,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WidgetListesContacts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetListesContacts::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetListesContacts.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int WidgetListesContacts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
