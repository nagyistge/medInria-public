/*=========================================================================

 medInria

 Copyright (c) INRIA 2013 - 2014. All rights reserved.
 See LICENSE.txt for details.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

=========================================================================*/

#pragma once

#include <medAbstractMorphomathOperationProcess.h>

#include <dtkCore>

#include <medCoreExport.h>

class MEDCORE_EXPORT medAbstractErodeImageProcess: public medAbstractMorphomathOperationProcess
{
    Q_OBJECT
public:
    medAbstractErodeImageProcess(QObject *parent): medAbstractMorphomathOperationProcess(parent) {}

protected:
    virtual QString outputNameAddon() const {return "erode";}
};

DTK_DECLARE_PLUGIN_FACTORY(medAbstractErodeImageProcess, MEDCORE_EXPORT)
