#include <array>
#include <ctime> // for time()
#include <cstdlib> // for rand() and srand()
#include <iostream>
#include <string>
#include <string_view>

class Monster
{
public:
	enum class Type
	{
		dragon,
		goblin,
		ogre,
		orc,
		skeleton,
		troll,
		vampire,
		zombie,
		maxTypes // for indexing purposes
	};

	Monster(Type type, const std::string &name, const std::string &roar, int hitPoints)
		: m_type {type}, m_name {name}, m_roar {roar}, m_hitPoints {hitPoints}
	{
		// monster class must be fully defined at creation
	}

	std::string_view getTypeString() const
	{
		switch (m_type)
		{
			case (Type::dragon):
				return "dragon";
			case (Type::goblin):
				return "goblin";
			case (Type::ogre):
				return "ogre";
			case (Type::orc):
				return "orc";
			case (Type::skeleton):
				return "skeleton";
			case (Type::troll):
				return "troll";
			case (Type::vampire):
				return "vampire";
			case (Type::zombie):
				return "zombie";
			default:
				return "???";
		}
	}

	void print() const
	{
		std::cout << m_name << " the " << getTypeString() << " has " << m_hitPoints << " hit points and says " << m_roar << '\n';
	}


private:
	Type m_type;
	std::string m_name;
	std::string m_roar;
	int m_hitPoints;
};

class MonsterGenerator
{
public:
	MonsterGenerator() = default;

	static Monster generateMonster() // can't return reference to a non const literal
	{
		static std::array<std::string, 6> s_names {"Roger", "John", "Earnest", "Susan", "Karen", "Clarence"};
		static std::array<std::string, 6> s_roars {"roooaaar", "squeek", "Grrrrr", "*rattle*", "thud", "*meow*"};

		auto type { static_cast<Monster::Type>(getRandomNumber(0, static_cast<int>(Monster::Type::maxTypes)-1)) };
		int hitPoints { getRandomNumber(1, 100) };

		auto name { s_names[static_cast<std::size_t>(getRandomNumber(0, s_names.size()-1))] };
		auto roar { s_roars[static_cast<std::size_t>(getRandomNumber(0, s_roars.size()-1))] };

		return {type, name, roar, hitPoints};
		}

	static int getRandomNumber(int min, int max)
	{
		static constexpr double fraction { 1.0 / (static_cast<double>(RAND_MAX) + 1.0)};
		return static_cast<int>(std::rand() * fraction * (max - min + 1) + min);
	}
};
 
int main()
{
	std::srand(static_cast<unsigned int>(std::time(nullptr))); // set initial seed value to system clock
	std::rand(); // If using Visual Studio, discard first random value
 
	Monster m{ MonsterGenerator::generateMonster() };
	m.print();
 
	return 0;
}