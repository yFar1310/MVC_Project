/****************************************************************************
** Meta object code from reading C++ file 'pagecontact.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../PROJET_CDAA_GROUPE(AM) (2)/Final_Project_CDAA/Final_Project/CDAA_Project/pagecontact.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagecontact.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PageContact_t {
    QByteArrayData data[18];
    char stringdata0[372];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageContact_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageContact_t qt_meta_stringdata_PageContact = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PageContact"
QT_MOC_LITERAL(1, 12, 17), // "OuvrirPageContact"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "Contact"
QT_MOC_LITERAL(4, 39, 1), // "c"
QT_MOC_LITERAL(5, 41, 17), // "DeletePageContact"
QT_MOC_LITERAL(6, 59, 13), // "ModifyContact"
QT_MOC_LITERAL(7, 73, 18), // "ListerInteractions"
QT_MOC_LITERAL(8, 92, 26), // "LancerWidgetAddInteraction"
QT_MOC_LITERAL(9, 119, 18), // "UpdateInteractions"
QT_MOC_LITERAL(10, 138, 23), // "AfficherPageInteraction"
QT_MOC_LITERAL(11, 162, 3), // "row"
QT_MOC_LITERAL(12, 166, 3), // "col"
QT_MOC_LITERAL(13, 170, 37), // "on_actionSupprimer_La_Fiche_t..."
QT_MOC_LITERAL(14, 208, 36), // "on_actionModifier_La_Fiche_tr..."
QT_MOC_LITERAL(15, 245, 42), // "on_actionAjouter_Une_Interact..."
QT_MOC_LITERAL(16, 288, 42), // "on_actionLister_Les_Interacti..."
QT_MOC_LITERAL(17, 331, 40) // "on_actionRecherche_Interactio..."

    },
    "PageContact\0OuvrirPageContact\0\0Contact\0"
    "c\0DeletePageContact\0ModifyContact\0"
    "ListerInteractions\0LancerWidgetAddInteraction\0"
    "UpdateInteractions\0AfficherPageInteraction\0"
    "row\0col\0on_actionSupprimer_La_Fiche_triggered\0"
    "on_actionModifier_La_Fiche_triggered\0"
    "on_actionAjouter_Une_Interaction_triggered\0"
    "on_actionLister_Les_Interactions_triggered\0"
    "on_actionRecherche_Interaction_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageContact[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    0,   81,    2, 0x0a /* Public */,
      10,    2,   82,    2, 0x0a /* Public */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    0,   88,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,
      16,    0,   90,    2, 0x08 /* Private */,
      17,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PageContact::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PageContact *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OuvrirPageContact((*reinterpret_cast< Contact(*)>(_a[1]))); break;
        case 1: _t->DeletePageContact(); break;
        case 2: _t->ModifyContact(); break;
        case 3: _t->ListerInteractions(); break;
        case 4: _t->LancerWidgetAddInteraction(); break;
        case 5: _t->UpdateInteractions(); break;
        case 6: _t->AfficherPageInteraction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->on_actionSupprimer_La_Fiche_triggered(); break;
        case 8: _t->on_actionModifier_La_Fiche_triggered(); break;
        case 9: _t->on_actionAjouter_Une_Interaction_triggered(); break;
        case 10: _t->on_actionLister_Les_Interactions_triggered(); break;
        case 11: _t->on_actionRecherche_Interaction_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PageContact::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_PageContact.data,
    qt_meta_data_PageContact,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PageContact::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageContact::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageContact.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int PageContact::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
