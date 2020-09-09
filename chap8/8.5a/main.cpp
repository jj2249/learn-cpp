#include <cstdint>
#include <iostream>

class RGBA
{
public:
	using num_t = std::uint_fast8_t;
	RGBA(num_t red=0, num_t green=0, num_t blue=0, num_t alpha=255)
		: m_red {red},
		m_green {green},
		m_blue {blue},
		m_alpha {alpha}
		{}

	void print()
	{
		std::cout << "r=" << static_cast<int>(m_red) << " g=" << static_cast<int>(m_green) << " b=" << static_cast<int>(m_blue) << " a=" << static_cast<int>(m_alpha) << '\n';
	}


private:
	num_t m_red;
	num_t m_green;
	num_t m_blue;
	num_t m_alpha;
};

int main()
{
	RGBA teal{ 0, 127, 127 };
	teal.print();
 
	return 0;
}