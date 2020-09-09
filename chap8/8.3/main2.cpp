#include <array>
#include <cassert>
#include <iostream>

class Stack
{
	using num_t = int;
public:
	void reset()
	{
		stackSize = 0;
	}

	bool push(num_t num)
	{
		if (stackSize == values.size())
		{
			return false;
		}

		values[stackSize++] = num;
		return true;
	}

	num_t pop()
	{
		assert(stackSize > 0 && "Stack is empty.");
		num_t topNum = values[stackSize];
		values[stackSize--] = 0;
		return topNum;
	}

	void print()
	{
		std::cout << "( ";
		for (int i{}; i < stackSize; i++)
		{
			std::cout << values[i] << " ";
		}
		std::cout << ")\n";
	}

private:
	std::array<num_t, 10> values{};
	num_t stackSize{0};

};

int main()
{
	Stack stack;
	stack.reset();
 
	stack.print();
 
	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();
 
	stack.pop();
	stack.print();
 
	stack.pop();
	stack.pop();
 
	stack.print();
 
	return 0;
}
