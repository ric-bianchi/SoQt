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

#ifndef SOQT_SLIDERSETBASE_H
#define SOQT_SLIDERSETBASE_H

#include <Inventor/Qt/SoQtComponent.h>

class SoNode;

// *************************************************************************

class SOQT_DLL_API SoQtSliderSetBase : public SoQtComponent {
  SOQT_OBJECT_ABSTRACT_HEADER(SoQtSliderSetBase, SoQtComponent);
  Q_OBJECT

public:
  virtual void setNode(SoNode * newNode);
  SoNode * getNode(void) const;

protected:
  SoQtSliderSetBase(QWidget * parent = NULL,
                    const char * name = NULL,
                    SbBool embed = TRUE,
                    SoNode * editnode = NULL);
  ~SoQtSliderSetBase();

private:
  SoNode * node;

}; // class SoQtSliderSetBase

// *************************************************************************

#endif // ! SOQT_SLIDERSETBASE_H
