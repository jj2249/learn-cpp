#include "Point3d.h"
#include "Vector3d.h"

#include <iostream>

void Point3d::print() const
{
	std::cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
}

void Point3d::moveByVector(const Vector3d &vector)
{
	m_x += vector.m_x;
	m_y += vector.m_y;
	m_z += vector.m_z;
}