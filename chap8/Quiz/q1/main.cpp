#include <cmath>
#include <iostream>

class Point2d
{
public:
	Point2d(double x=0.0, double y=0.0)
		: m_x {x}, m_y {y} 
	{

	}

	void print()
	{
		std::cout << "Point2d(" << m_x << ", " << m_y << ")\n";
	}

	friend double distanceFrom(const Point2d &p1, const Point2d &p2);

	/*
	double distanceTo(const Point2d &point2d)
	{
		return std::sqrt((m_x - point2d.m_x) * (m_x - point2d.m_x) +(m_y - point2d.m_y) * (m_y - point2d.m_y));
	}
	*/

private:
	double m_x;
	double m_y;
};

double distanceFrom(const Point2d &p1, const Point2d &p2)
{
	return std::sqrt((p1.m_x - p2.m_x) * (p1.m_x - p2.m_x) +(p1.m_y - p2.m_y) * (p1.m_y - p2.m_y));
}
	
int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };
    first.print();
    second.print();
    std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';
 
    return 0;
}