/****************************************************************************
** Meta object code from reading C++ file 'observer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../observer.h"
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
#error "The header file 'observer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSHeapObserverENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSHeapObserverENDCLASS = QtMocHelpers::stringData(
    "HeapObserver",
    "renderArray",
    "",
    "k",
    "renderNodes",
    "renderSwap",
    "index1",
    "index2",
    "setTextAlign",
    "QGraphicsTextItem*",
    "t",
    "swapNodeValue",
    "i",
    "j",
    "setNodesValue",
    "QList<int>",
    "res"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSHeapObserverENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[13];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[12];
    char stringdata5[11];
    char stringdata6[7];
    char stringdata7[7];
    char stringdata8[13];
    char stringdata9[19];
    char stringdata10[2];
    char stringdata11[14];
    char stringdata12[2];
    char stringdata13[2];
    char stringdata14[14];
    char stringdata15[11];
    char stringdata16[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSHeapObserverENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSHeapObserverENDCLASS_t qt_meta_stringdata_CLASSHeapObserverENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "HeapObserver"
        QT_MOC_LITERAL(13, 11),  // "renderArray"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 1),  // "k"
        QT_MOC_LITERAL(28, 11),  // "renderNodes"
        QT_MOC_LITERAL(40, 10),  // "renderSwap"
        QT_MOC_LITERAL(51, 6),  // "index1"
        QT_MOC_LITERAL(58, 6),  // "index2"
        QT_MOC_LITERAL(65, 12),  // "setTextAlign"
        QT_MOC_LITERAL(78, 18),  // "QGraphicsTextItem*"
        QT_MOC_LITERAL(97, 1),  // "t"
        QT_MOC_LITERAL(99, 13),  // "swapNodeValue"
        QT_MOC_LITERAL(113, 1),  // "i"
        QT_MOC_LITERAL(115, 1),  // "j"
        QT_MOC_LITERAL(117, 13),  // "setNodesValue"
        QT_MOC_LITERAL(131, 10),  // "QList<int>"
        QT_MOC_LITERAL(142, 3)   // "res"
    },
    "HeapObserver",
    "renderArray",
    "",
    "k",
    "renderNodes",
    "renderSwap",
    "index1",
    "index2",
    "setTextAlign",
    "QGraphicsTextItem*",
    "t",
    "swapNodeValue",
    "i",
    "j",
    "setNodesValue",
    "QList<int>",
    "res"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSHeapObserverENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x0a,    1 /* Public */,
       4,    1,   53,    2, 0x0a,    3 /* Public */,
       5,    2,   56,    2, 0x0a,    5 /* Public */,
       8,    1,   61,    2, 0x0a,    8 /* Public */,
      11,    2,   64,    2, 0x0a,   10 /* Public */,
      14,    1,   69,    2, 0x0a,   13 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject HeapObserver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSHeapObserverENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSHeapObserverENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSHeapObserverENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<HeapObserver, std::true_type>,
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
        // method 'setTextAlign'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGraphicsTextItem *, std::false_type>,
        // method 'swapNodeValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setNodesValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>
    >,
    nullptr
} };

void HeapObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HeapObserver *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->renderArray((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->renderNodes((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->renderSwap((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->setTextAlign((*reinterpret_cast< std::add_pointer_t<QGraphicsTextItem*>>(_a[1]))); break;
        case 4: _t->swapNodeValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->setNodesValue((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGraphicsTextItem* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *HeapObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HeapObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSHeapObserverENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HeapObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
