/****************************************************************************
** Resource object code
**
** Created: Wed Dec 23 09:38:26 2015
**      by: The Resource Compiler for Qt version 4.8.4
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtCore/qglobal.h>

static const unsigned char qt_resource_data[] = {
  // C:/qtFunySpace/gitHub/WorkSpace/qtProjectTest/testTranslate/qiankun.qm
  0x0,0x0,0x0,0x85,
  0x3c,
  0xb8,0x64,0x18,0xca,0xef,0x9c,0x95,0xcd,0x21,0x1c,0xbf,0x60,0xa1,0xbd,0xdd,0x42,
  0x0,0x0,0x0,0x8,0x1,0xce,0xe9,0x8f,0x0,0x0,0x0,0x0,0x69,0x0,0x0,0x0,
  0x63,0x3,0x0,0x0,0x0,0x1e,0x52,0x20,0x96,0x64,0x0,0x25,0x0,0x31,0x0,0x2c,
  0x0,0x77,0x0,0x75,0x0,0x71,0x0,0x69,0x0,0x61,0x0,0x6e,0x0,0x6b,0x0,0x75,
  0x0,0x6e,0x0,0x3f,0x8,0x0,0x0,0x0,0x0,0x6,0x0,0x0,0x0,0x25,0x41,0x72,
  0x65,0x20,0x79,0x6f,0x75,0x20,0x73,0x75,0x72,0x65,0x20,0x79,0x6f,0x75,0x20,0x77,
  0x61,0x6e,0x74,0x20,0x74,0x6f,0x20,0x64,0x65,0x6c,0x65,0x74,0x65,0x20,0x27,0x25,
  0x31,0x27,0x3f,0x7,0x0,0x0,0x0,0xb,0x51,0x46,0x69,0x6c,0x65,0x44,0x69,0x61,
  0x6c,0x6f,0x67,0x1,
  
};

static const unsigned char qt_resource_name[] = {
  // language
  0x0,0x8,
  0x8,0x4e,0xb9,0x95,
  0x0,0x6c,
  0x0,0x61,0x0,0x6e,0x0,0x67,0x0,0x75,0x0,0x61,0x0,0x67,0x0,0x65,
    // qiankun.qm
  0x0,0xa,
  0x5,0x26,0xea,0x7d,
  0x0,0x71,
  0x0,0x69,0x0,0x61,0x0,0x6e,0x0,0x6b,0x0,0x75,0x0,0x6e,0x0,0x2e,0x0,0x71,0x0,0x6d,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/language
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
  // :/language/qiankun.qm
  0x0,0x0,0x0,0x16,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

};

QT_BEGIN_NAMESPACE

extern Q_CORE_EXPORT bool qRegisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

extern Q_CORE_EXPORT bool qUnregisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

QT_END_NAMESPACE


int QT_MANGLE_NAMESPACE(qInitResources_res)()
{
    QT_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_res))

int QT_MANGLE_NAMESPACE(qCleanupResources_res)()
{
    QT_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_DESTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qCleanupResources_res))
