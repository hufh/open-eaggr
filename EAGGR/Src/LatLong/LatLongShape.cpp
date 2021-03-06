//------------------------------------------------------
// Copyright (c) Riskaware 2015
//------------------------------------------------------
//
// system: EAGGR
//
// subsystem: Latitude / Longitude
//
//------------------------------------------------------
/// @file LatLongShape.cpp
/// 
/// Defines types used in the latitude/longitude domain
///
/// This file is part of OpenEAGGR.
///
/// OpenEAGGR is free software: you can redistribute it and/or modify
/// it under the terms of the GNU Lesser General Public License as published by
/// the Free Software Foundation, either version 3 of the License, or
/// (at your option) any later version.
///
/// OpenEAGGR is distributed in the hope that it will be useful,
/// but WITHOUT ANY WARRANTY; without even the implied warranty of
/// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
/// GNU Lesser General Public License for more details.
///
/// A copy of the GNU Lesser General Public License is available in COPYING.LESSER
/// or can be found at <http://www.gnu.org/licenses/>.
//------------------------------------------------------

#include "LatLongShape.hpp"

namespace EAGGR
{
  namespace LatLong
  {
    LatLongShape::LatLongShape(const LatLongShapeType a_shapeType, const IShape* const a_pShape)
        : m_shapeType(a_shapeType), m_pShape(a_pShape)
    {
    }

    LatLongShapeType LatLongShape::GetShapeType()
    {
      return m_shapeType;
    }

    const IShape* LatLongShape::GetShapeData()
    {
      return m_pShape;
    }
  }
}
