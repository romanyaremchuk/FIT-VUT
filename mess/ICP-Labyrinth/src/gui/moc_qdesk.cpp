/****************************************************************************
** Meta object code from reading C++ file 'qdesk.h'
**
** Created: Sun May 10 17:58:31 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qdesk.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesk.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDesk[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    7,    6,    6, 0x05,
      32,    7,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
      60,    6,    6,    6, 0x0a,
      73,    6,    6,    6, 0x0a,
      89,   87,    6,    6, 0x0a,
     105,   87,    6,    6, 0x0a,
     120,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QDesk[] = {
    "QDesk\0\0,,\0fireMove(int,int,int)\0"
    "firePut(int,int,stoneAngle)\0rotateLeft()\0"
    "rotateRight()\0,\0opMove(int,int)\0"
    "opPut(int,int)\0enableMove()\0"
};

const QMetaObject QDesk::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QDesk,
      qt_meta_data_QDesk, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDesk::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDesk::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDesk::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDesk))
        return static_cast<void*>(const_cast< QDesk*>(this));
    return QWidget::qt_metacast(_clname);
}

int QDesk::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: fireMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: firePut((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< stoneAngle(*)>(_a[3]))); break;
        case 2: rotateLeft(); break;
        case 3: rotateRight(); break;
        case 4: opMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: opPut((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: enableMove(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QDesk::fireMove(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDesk::firePut(int _t1, int _t2, stoneAngle _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
