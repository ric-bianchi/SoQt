/**************************************************************************
 *
 *  This file is part of the Coin SoQt GUI binding library.
 *  Copyright (C) 1998-2000 by Systems in Motion.  All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License version
 *  2.1 as published by the Free Software Foundation.  See the file
 *  LICENSE.LGPL at the root directory of the distribution for all the
 *  details.
 *
 *  If you want to use Coin SoQt for applications not compatible with the
 *  LGPL, please contact SIM to acquire a Professional Edition License.
 *
 *  Systems in Motion, Prof Brochs gate 6, N-7030 Trondheim, NORWAY
 *  http://www.sim.no/ support@sim.no Voice: +47 22114160 Fax: +47 22207097
 *
 **************************************************************************/

// $Id$

#ifndef SOQT_WALKVIEWER_H
#define SOQT_WALKVIEWER_H

#include <Inventor/Qt/viewers/SoQtConstrainedViewer.h>

// ************************************************************************

class SOQT_DLL_API SoQtWalkViewer : public SoQtConstrainedViewer {
  SOQT_OBJECT_HEADER(SoQtWalkViewer, SoQtConstrainedViewer);
  Q_OBJECT

public:
  SoQtWalkViewer(
    QWidget * parent = NULL,
    const char * name = NULL,
    SbBool embed = TRUE,
    SoQtFullViewer::BuildFlag flag = BUILD_ALL,
    SoQtViewer::Type type = BROWSER );
  ~SoQtWalkViewer(void);

  virtual void setViewing( SbBool enable );
  virtual void setCamera( SoCamera * camera );
  virtual void setCursorEnabled( SbBool enable );

  virtual void setCameraType( SoType type );

protected:
  SoQtWalkViewer(
    QWidget * parent,
    const char * name,
    SbBool embed,
    SoQtFullViewer::BuildFlag flag,
    SoQtViewer::Type type,
    SbBool build );

  virtual const char * getDefaultWidgetName(void) const;
  virtual const char * getDefaultTitle(void) const;
  virtual const char * getDefaultIconTitle(void) const;

  virtual void processEvent( QEvent * event );
  virtual void setSeekMode( SbBool enable );
  virtual void actualRedraw(void);

  virtual void rightWheelMotion( float value );

  virtual QWidget * buildLeftTrim( QWidget * parent );

  virtual void createPrefSheet(void);
  virtual void openViewerHelpCard(void);

}; // class SoQtWalkViewer

// ************************************************************************

#endif // ! SOQT_WALKVIEWER_H
