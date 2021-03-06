//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//
//  bezier_point_data.hpp
//
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//  Copyright (c) Wargaming.net. All rights reserved.
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#ifndef BEZIER_POINT_DATA_H_
#define BEZIER_POINT_DATA_H_

#pragma once

namespace wgt
{
struct BezierPointData
{
	struct PointData
	{
		float x;
		float y;
	};

	PointData pos;
	PointData cp1;
	PointData cp2;
};
} // end namespace wgt
#endif // BEZIER_POINT_DATA_H_
