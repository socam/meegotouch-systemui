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

#ifndef STATUSAREASTUB_H
#define STATUSAREASTUB_H

#include "statusarea.h"
#include <stubbase.h>


// 1. DECLARE STUB
// FIXME - stubgen is not yet finished
class StatusAreaStub : public StubBase {
  public:
  virtual void StatusAreaConstructor(QGraphicsItem *parent);
  virtual void StatusAreaDestructor();
  virtual bool sceneEvent(QEvent *event);
}; 

// 2. IMPLEMENT STUB
void StatusAreaStub::StatusAreaConstructor(QGraphicsItem *parent) {
  Q_UNUSED(parent);
}
void StatusAreaStub::StatusAreaDestructor() {

}
bool StatusAreaStub::sceneEvent(QEvent *event) {
  QList<ParameterBase*> params;
  params.append( new Parameter<QEvent * >(event));
  stubMethodEntered("sceneEvent",params);
  return stubReturnValue<bool>("sceneEvent");
}



// 3. CREATE A STUB INSTANCE
StatusAreaStub gDefaultStatusAreaStub;
StatusAreaStub* gStatusAreaStub = &gDefaultStatusAreaStub;


// 4. CREATE A PROXY WHICH CALLS THE STUB
StatusArea::StatusArea(QGraphicsItem *parent) {
  gStatusAreaStub->StatusAreaConstructor(parent);
}

StatusArea::~StatusArea() {
  gStatusAreaStub->StatusAreaDestructor();
}


#endif
