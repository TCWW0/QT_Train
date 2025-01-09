/****************************************************************************
** Meta object code from reading C++ file 'heap.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../课设材料/OptHeap/heap.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'heap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
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
struct qt_meta_stringdata_CLASSheapENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSheapENDCLASS = QtMocHelpers::stringData(
    "heap",
    "renderArray",
    "",
    "k",
    "renderNodes",
    "renderSwap",
    "index1",
    "index2",
    "swapNodeValue",
    "i",
    "j",
    "updateNodesValue",
    "QList<int>",
    "res",
    "setTextAlign",
    "QGraphicsTextItem*",
    "t"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSheapENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[5];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[12];
    char stringdata5[11];
    char stringdata6[7];
    char stringdata7[7];
    char stringdata8[14];
    char stringdata9[2];
    char stringdata10[2];
    char stringdata11[17];
    char stringdata12[11];
    char stringdata13[4];
    char stringdata14[13];
    char stringdata15[19];
    char stringdata16[2];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSheapENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSheapENDCLASS_t qt_meta_stringdata_CLASSheapENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "heap"
        QT_MOC_LITERAL(5, 11),  // "renderArray"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 1),  // "k"
        QT_MOC_LITERAL(20, 11),  // "renderNodes"
        QT_MOC_LITERAL(32, 10),  // "renderSwap"
        QT_MOC_LITERAL(43, 6),  // "index1"
        QT_MOC_LITERAL(50, 6),  // "index2"
        QT_MOC_LITERAL(57, 13),  // "swapNodeValue"
        QT_MOC_LITERAL(71, 1),  // "i"
        QT_MOC_LITERAL(73, 1),  // "j"
        QT_MOC_LITERAL(75, 16),  // "updateNodesValue"
        QT_MOC_LITERAL(92, 10),  // "QList<int>"
        QT_MOC_LITERAL(103, 3),  // "res"
        QT_MOC_LITERAL(107, 12),  // "setTextAlign"
        QT_MOC_LITERAL(120, 18),  // "QGraphicsTextItem*"
        QT_MOC_LITERAL(139, 1)   // "t"
    },
    "heap",
    "renderArray",
    "",
    "k",
    "renderNodes",
    "renderSwap",
    "index1",
    "index2",
    "swapNodeValue",
    "i",
    "j",
    "updateNodesValue",
    "QList<int>",
    "res",
    "setTextAlign",
    "QGraphicsTextItem*",
    "t"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSheapENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    1,   53,    2, 0x06,    3 /* Public */,
       5,    2,   56,    2, 0x06,    5 /* Public */,
       8,    2,   61,    2, 0x06,    8 /* Public */,
      11,    1,   66,    2, 0x06,   11 /* Public */,
      14,    1,   69,    2, 0x06,   13 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject heap::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSheapENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSheapENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSheapENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<heap, std::true_type>,
        // method 'renderArray'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'renderNodes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'renderSwap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'swapNodeValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateNodesValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>,
        // method 'setTextAlign'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGraphicsTextItem *, std::false_type>
    >,
    nullptr
} };

void heap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<heap *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->renderArray((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->renderNodes((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->renderSwap((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->swapNodeValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->updateNodesValue((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 5: _t->setTextAlign((*reinterpret_cast< std::add_pointer_t<QGraphicsTextItem*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGraphicsTextItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (heap::*)(int );
            if (_t _q_method = &heap::renderArray; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (heap::*)(int );
            if (_t _q_method = &heap::renderNodes; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (heap::*)(int , int );
            if (_t _q_method = &heap::renderSwap; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (heap::*)(int , int );
            if (_t _q_method = &heap::swapNodeValue; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (heap::*)(QVector<int> );
            if (_t _q_method = &heap::updateNodesValue; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (heap::*)(QGraphicsTextItem * );
            if (_t _q_method = &heap::setTextAlign; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *heap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *heap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSheapENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int heap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void heap::renderArray(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void heap::renderNodes(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void heap::renderSwap(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void heap::swapNodeValue(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void heap::updateNodesValue(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void heap::setTextAlign(QGraphicsTextItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
