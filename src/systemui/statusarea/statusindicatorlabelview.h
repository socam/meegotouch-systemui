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

#ifndef STATUSINDICATORLABELVIEW_H
#define STATUSINDICATORLABELVIEW_H

#include "statusindicator.h"
#include "statusindicatormodel.h"
#include "statusindicatorlabelstyle.h"
#include <MWidgetView>

class MLabel;

/*!
  \class StatusIndicatorLabelView
  \brief a view class for the status indicator widgets.
*/
class StatusIndicatorLabelView : public MWidgetView
{
    Q_OBJECT
    M_VIEW(StatusIndicatorModel, StatusIndicatorLabelStyle)

public:
    /*!
     * \brief Constructs a new StatusIndicatorLabelView.
     *
     * \param controller The view's controller
     */
    StatusIndicatorLabelView(StatusIndicator *controller);

    /*!
     * \brief Destroys the StatusIndicatorLabelView.
     */
    virtual ~StatusIndicatorLabelView();

protected slots:
    //! \reimp
    virtual void updateData(const QList<const char *>& modifications);
    //! \reimp_end

protected:
    //! \reimp
    virtual void setupModel();
    virtual void applyStyle();
    //! \reimp_end

private:
    //! The controller for this view
    StatusIndicator *controller;

    //! A label for the text
    MLabel *label;

#ifdef UNIT_TEST
    friend class Ut_StatusIndicatorLabelView;
#endif
};

#endif // STATUSINDICATORLABELVIEW_H
