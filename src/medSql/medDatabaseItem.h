/*=========================================================================

 medInria

 Copyright (c) INRIA 2013. All rights reserved.
 See LICENSE.txt for details.
 
  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

=========================================================================*/

#pragma once

#include "medSqlExport.h"

#include <QtDebug>
#include <QtGui>

#include <medDataIndex.h>
#include <medAbstractDatabaseItem.h>

class medDatabaseItemPrivate;

class MEDSQL_EXPORT medDatabaseItem : public medAbstractDatabaseItem
{
public:
     medDatabaseItem(medDataIndex index, const QList<QVariant>& attributes, const QList<QVariant>& data, medAbstractDatabaseItem *parent = 0);
    ~medDatabaseItem();

    medAbstractDatabaseItem *child(int row);
    medAbstractDatabaseItem *parent();

    void append(medAbstractDatabaseItem *child);

    int row() const;
    int childCount() const;
    int childNumber() const;
    int columnCount() const;

    QVariant data(int column) const;

    bool insertChildren(const medDataIndex& index, int position, int count, int columns);
    bool insertColumns(int position, int columns);

    bool removeChildren(int position, int count);
    bool removeColumns(int position, int columns);

    bool setData(int column, const QVariant& value);

   /**
    * Returns the data index for this item
    */
    const medDataIndex & dataIndex () const;

public:
    QVariant attribute(int column);
    QVariant     value(int column);

private:
    medDatabaseItemPrivate *d;
};


