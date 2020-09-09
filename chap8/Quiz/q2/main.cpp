#include <iostream>

class HelloWorld
{
public:
	HelloWorld()
	{
		m_data = new char[14];
		const char *init{ "Hello, World!" };
		for (int i = 0; i < 14; ++i)
			m_data[i] = init[i];
	}

	~HelloWorld()
	{
		delete[] m_data;
		m_data = 0; // not strictly necessary as block terminates after destructor call but hey ho
	}

	void print() const
	{
		std::cout << m_data << '\n';
	}

private:
	char *m_data{}; 
};
 
int main()
{
	HelloWorld hello{};
	hello.print();
 
    return 0;
}