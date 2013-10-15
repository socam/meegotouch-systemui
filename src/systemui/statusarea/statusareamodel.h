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

#ifndef STATUSAREAMODEL_H_
#define STATUSAREAMODEL_H_

#include <mwidgetmodel.h>

/*!
 * This is the StatusArea widget's data model.
 * Data model is shared between StatusArea and StatusAreaView.
 */
class StatusAreaModel : public MWidgetModel
{
    Q_OBJECT
    M_MODEL(StatusAreaModel)
};

#endif /* STATUSAREAMODEL_H_ */
