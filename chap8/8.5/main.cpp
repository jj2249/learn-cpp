#include <iostream>
#include <string>

class Ball
{
public:
	
	Ball(double radius)
	{
		m_radius = radius;
	}

	Ball(const std::string &color="black", double radius=10.0)
	{
		m_color = color;
		m_radius = radius;
	}

	void print()
	{
		std::cout << "Color: " << m_color <<", radius: " << m_radius << '\n';
	}

private:
	std::string m_color {"black"};
	double m_radius {10.0};
};

int main()
{
	Ball def{};
	def.print();
 
	Ball blue{ "blue" };
	blue.print();
	
	Ball twenty{ 20.0 };
	twenty.print();
	
	Ball blueTwenty{ "blue", 20.0 };
	blueTwenty.print();
 
	return 0;
}