/****************************************************************************
** Meta object code from reading C++ file 'ellipse.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ellipse.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ellipse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSEllipseENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSEllipseENDCLASS = QtMocHelpers::stringData(
    "Ellipse",
    "QML.Element",
    "auto",
    "borderChanged",
    "",
    "colorChanged",
    "ellipseInfo",
    "onPropertyChange",
    "setProperties",
    "new_border",
    "new_color",
    "border",
    "color"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSEllipseENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       5,   16, // methods
       2,   55, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   46,    4, 0x06,    3 /* Public */,
       5,    0,   47,    4, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   48,    4, 0x0a,    5 /* Public */,
       7,    0,   49,    4, 0x0a,    6 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       8,    2,   50,    4, 0x02,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::QColor,    9,   10,

 // properties: name, type, flags, notifyId, revision
      11, QMetaType::Float, 0x00015903, uint(0), 0,
      12, QMetaType::QColor, 0x00015803, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Ellipse::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickPaintedItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSEllipseENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSEllipseENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'border'
        float,
        // property 'color'
        QColor,
        // Q_OBJECT / Q_GADGET
        Ellipse,
        // method 'borderChanged'
        void,
        // method 'colorChanged'
        void,
        // method 'ellipseInfo'
        void,
        // method 'onPropertyChange'
        void,
        // method 'setProperties'
        void,
        float,
        QColor
    >,
    nullptr
} };

void Ellipse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Ellipse *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->borderChanged(); break;
        case 1: _t->colorChanged(); break;
        case 2: _t->ellipseInfo(); break;
        case 3: _t->onPropertyChange(); break;
        case 4: _t->setProperties((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Ellipse::*)();
            if (_t _q_method = &Ellipse::borderChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Ellipse::*)();
            if (_t _q_method = &Ellipse::colorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Ellipse *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getBorder(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->m_color; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Ellipse *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBorder(*reinterpret_cast< float*>(_v)); break;
        case 1:
            if (_t->m_color != *reinterpret_cast< QColor*>(_v)) {
                _t->m_color = *reinterpret_cast< QColor*>(_v);
                Q_EMIT _t->colorChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Ellipse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ellipse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSEllipseENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int Ellipse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Ellipse::borderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Ellipse::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
