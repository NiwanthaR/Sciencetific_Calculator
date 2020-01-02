/****************************************************************************
** Meta object code from reading C++ file 'calculator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../calculator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Calculator_t {
    QByteArrayData data[11];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calculator_t qt_meta_stringdata_Calculator = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Calculator"
QT_MOC_LITERAL(1, 11, 24), // "on_btn_clear_all_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 20), // "on_btn_clear_clicked"
QT_MOC_LITERAL(4, 58, 12), // "digite_press"
QT_MOC_LITERAL(5, 71, 19), // "Arithmatic_Operator"
QT_MOC_LITERAL(6, 91, 18), // "on_btn_dot_clicked"
QT_MOC_LITERAL(7, 110, 25), // "on_btn_plus_minus_clicked"
QT_MOC_LITERAL(8, 136, 19), // "on_btn_eqal_clicked"
QT_MOC_LITERAL(9, 156, 24), // "on_btn_backslash_clicked"
QT_MOC_LITERAL(10, 181, 17) // "on_btn_pi_clicked"

    },
    "Calculator\0on_btn_clear_all_clicked\0"
    "\0on_btn_clear_clicked\0digite_press\0"
    "Arithmatic_Operator\0on_btn_dot_clicked\0"
    "on_btn_plus_minus_clicked\0on_btn_eqal_clicked\0"
    "on_btn_backslash_clicked\0on_btn_pi_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calculator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
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

void Calculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Calculator *_t = static_cast<Calculator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_clear_all_clicked(); break;
        case 1: _t->on_btn_clear_clicked(); break;
        case 2: _t->digite_press(); break;
        case 3: _t->Arithmatic_Operator(); break;
        case 4: _t->on_btn_dot_clicked(); break;
        case 5: _t->on_btn_plus_minus_clicked(); break;
        case 6: _t->on_btn_eqal_clicked(); break;
        case 7: _t->on_btn_backslash_clicked(); break;
        case 8: _t->on_btn_pi_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Calculator::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Calculator.data,
      qt_meta_data_Calculator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Calculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calculator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Calculator.stringdata0))
        return static_cast<void*>(const_cast< Calculator*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Calculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
