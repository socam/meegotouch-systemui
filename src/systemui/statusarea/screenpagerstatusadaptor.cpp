/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp screenpagerstatus.xml -a screenpagerstatusadaptor -c ScreenPagerStatusAdaptor -l ScreenPagerStatus -i screenpagerstatus.h
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "screenpagerstatusadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <iostream>
using namespace std;

/*
 * Implementation of adaptor class ScreenPagerStatusAdaptor
 */

ScreenPagerStatusAdaptor::ScreenPagerStatusAdaptor(StatusIndicator *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

ScreenPagerStatusAdaptor::~ScreenPagerStatusAdaptor()
{
    // destructor
}

void ScreenPagerStatusAdaptor::setCurrentPage(uint index)
{
    // handle method call zed.socam.ScreenPagerStatus.setCurrentPage
    parent()->setCurrentPage(index);
}
