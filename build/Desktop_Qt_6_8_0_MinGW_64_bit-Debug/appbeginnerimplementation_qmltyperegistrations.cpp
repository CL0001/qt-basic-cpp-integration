/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<ellipse.h>)
#  include <ellipse.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_BeginnerImplementation()
{
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<Ellipse>("BeginnerImplementation", 1);
    qmlRegisterAnonymousType<QQuickItem, 254>("BeginnerImplementation", 1);
    QT_WARNING_POP
    qmlRegisterModule("BeginnerImplementation", 1, 0);
}

static const QQmlModuleRegistration beginnerImplementationRegistration("BeginnerImplementation", qml_register_types_BeginnerImplementation);
