#include <iostream>

class Point3d
{
	using num_t = int;
public:
	void setValues(num_t x, num_t y, num_t z)
	{
		m_x = x;
		m_y = y;
		m_z = z;
	};

	void print()
	{
		std::cout << "<" << m_x << " ," << m_y << " , " << m_z << ">\n";
	};

	bool isEqual(const Point3d &other)
	{
		return ((m_x == other.m_x) && (m_y == other.m_y) && (m_z == other.m_z));
	};

private:
	num_t m_x;
	num_t m_y;
	num_t m_z;
};

int main()
{
    Point3d point1;
    point1.setValues(1, 2, 3);
 
    Point3d point2;
    point2.setValues(1, 2, 3);
 
    if (point1.isEqual(point2))
    {
        std::cout << "point1 and point2 are equal\n";
    }
    else
    {
        std::cout << "point1 and point2 are not equal\n";
    }
 
    Point3d point3;
    point3.setValues(3, 4, 5);
 
    if (point1.isEqual(point3))
    {
        std::cout << "point1 and point3 are equal\n";
    }
    else
    {
        std::cout << "point1 and point3 are not equal\n";
    }
 
    return 0;
}