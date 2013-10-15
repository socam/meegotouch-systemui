/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp screenpagerstatus.xml -a screenpagerstatusadaptor -c ScreenPagerStatusAdaptor -l ScreenPagerStatus -i screenpagerstatus.h
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef SCREENPAGERSTATUSADAPTOR_H_1370607658
#define SCREENPAGERSTATUSADAPTOR_H_1370607658

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "statusindicator.h"
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface zed.socam.ScreenPagerStatus
 */
class ScreenPagerStatusAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "zed.socam.ScreenPagerStatus")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"zed.socam.ScreenPagerStatus\">\n"
"    <method name=\"setCurrentPage\">\n"
"      <arg direction=\"in\" type=\"u\" name=\"index\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    ScreenPagerStatusAdaptor(StatusIndicator *parent);
    virtual ~ScreenPagerStatusAdaptor();

    //inline ScreenPagerStatus *parent() const
    //{ return ScreenPagerStatusAdaptor::parent(); }


    inline ScreenPagerStatus *parent() const
    { return static_cast<ScreenPagerStatus *>(QObject::parent()); }

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void setCurrentPage(uint index);
Q_SIGNALS: // SIGNALS
};

#endif
