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
#ifndef TESTCONTEXTITEM
#define TESTCONTEXTITEM

#include "applicationcontext.h"
#include <QVariant>
#include <stubbase.h>

class ContextItemStub : public StubBase
{
public:
    virtual void ContextItemConstructor();
    virtual void ContextItemDestructor();
    virtual void subscribe();
    virtual void unsubscribe();
};

extern ContextItemStub *gContextItemStub;

class TestContextItem : public ContextItem
{
    Q_OBJECT

public:
    TestContextItem();
    virtual ~TestContextItem();
    void setValue(const QVariant &val);

    virtual QVariant value() const;

    virtual void subscribe() const;
    virtual void unsubscribe() const;

private:
    QVariant value_;
};

#endif
