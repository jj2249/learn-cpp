#include <iostream>

class IntPair
{
public:
	using num_t = int;

	num_t num1;
	num_t num2;

	void set(num_t val1, num_t val2)
	{
		num1 = val1;
		num2 = val2;
	};

	void print()
	{
		std::cout << "Print(" << num1 << ", " << num2 << ")\n";
	};
};

int main()
{
	IntPair p1;
	p1.set(1, 1); // set p1 values to (1, 1)
	
	IntPair p2{ 2, 2 }; // initialize p2 values to (2, 2)
 
	p1.print();
	p2.print();
 
	return 0;
}