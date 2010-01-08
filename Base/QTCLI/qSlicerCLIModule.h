/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH) 
 All Rights Reserved.

 See Doc/copyright/copyright.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


#ifndef __qSlicerCLIModule_h
#define __qSlicerCLIModule_h

#include "qSlicerAbstractModule.h"

#include <qCTKPimpl.h>
#include "qSlicerBaseQTCLIExport.h"

class qSlicerCLIModulePrivate;
class Q_SLICER_BASE_QTCLI_EXPORT qSlicerCLIModule : public qSlicerAbstractModule
{
public:

  typedef qSlicerAbstractModule Superclass;
  qSlicerCLIModule(QWidget *parent=0);
  virtual ~qSlicerCLIModule(){}

  // Description:
  // Assign the module XML description.
  // Note: That will also trigger the parsing of the XML structure
  void setXmlModuleDescription(const char* xmlModuleDescription);
  
  virtual QString title()const;
  virtual QString category()const;
  virtual QString contributor()const;

  // Description:
  // Return help/acknowledgement text
  virtual QString helpText()const;
  virtual QString acknowledgementText()const;

  // Description:
  // Set temporary directory associated with the module
  void setTempDirectory(const QString& tempDirectory);

protected:
  // Description:
  // Overloaded
  virtual void setup();

  // Description:
  // Create and return the widget representation associated to this module
  virtual qSlicerAbstractModuleWidget * createWidgetRepresentation();

  // Description:
  // Create and return the logic associated to this module
  virtual qSlicerModuleLogic* createLogic();

private:
  QCTK_DECLARE_PRIVATE(qSlicerCLIModule);
};

#endif
