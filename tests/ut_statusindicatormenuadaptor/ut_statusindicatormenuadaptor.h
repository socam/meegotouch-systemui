/****************************************************************************
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (directui@nokia.com)
**
** This file is part of systemui.
**
** If you have questions regarding the use of this file, please contact
** Nokia at directui@nokia.com.
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation
** and appearing in the file LICENSE.LGPL included in the packaging
** of this file.
**
****************************************************************************/
#ifndef _UT_STATUSINDICATORMENUADAPTOR_
#define _UT_STATUSINDICATORMENUADAPTOR_

#include <QObject>

class MApplication;
class StatusIndicatorMenuAdaptor;
class StatusIndicatorMenuBusinessLogic;

class Ut_StatusIndicatorMenuAdaptor : public QObject
{
    Q_OBJECT

private:
    MApplication *app;
    StatusIndicatorMenuBusinessLogic *menuBusinessLogic;
    StatusIndicatorMenuAdaptor *menuAdaptor;

private slots:
    // Executed once before every test case
    void init();

    // Executed once after every test case
    void cleanup();

    // Executed once before first test case
    void initTestCase();

    // Executed once after last test case
    void cleanupTestCase();

    void testOpenSignal();
};

#endif //_UT_STATUSINDICATORMENUADAPTOR_
