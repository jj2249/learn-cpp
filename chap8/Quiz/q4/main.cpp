#include "Card.hpp"

#include <algorithm>
#include <array>
#include <cassert>
#include <ctime>
#include <iostream>
#include <random>
 
int main()
{
  Deck deck{};
  deck.print();
  deck.shuffle();
  deck.print();
 
  return 0;
}