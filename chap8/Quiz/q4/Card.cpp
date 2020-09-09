#include "Card.hpp"

#include <iostream>

Card::Card(const CardRank &rank, const CardSuit &suit)
	: m_rank {rank}, m_suit {suit}
{
	
}

void Card::print() const
{
switch (m_rank)
    {
    case CardRank::r2:
      std::cout << '2';
      break;
    case CardRank::r3:
      std::cout << '3';
      break;
    case CardRank::r4:
      std::cout << '4';
      break;
    case CardRank::r5:
      std::cout << '5';
      break;
    case CardRank::r6:
      std::cout << '6';
      break;
    case CardRank::r7:
      std::cout << '7';
      break;
    case CardRank::r8:
      std::cout << '8';
      break;
    case CardRank::r9:
      std::cout << '9';
      break;
    case CardRank::r10:
      std::cout << 'T';
      break;
    case CardRank::rJack:
      std::cout << 'J';
      break;
    case CardRank::rQueen:
      std::cout << 'Q';
      break;
    case CardRank::rKing:
      std::cout << 'K';
      break;
    case CardRank::rAce:
      std::cout << 'A';
      break;
    default:
      std::cout << '?';
      break;
    }
   
    switch (m_suit)
    {
    case CardSuit::sClub:
      std::cout << 'C';
      break;
    case CardSuit::sDiamond:
      std::cout << 'D';
      break;
    case CardSuit::sHeart:
      std::cout << 'H';
      break;
    case CardSuit::sSpade:
      std::cout << 'S';
      break;
    default:
      std::cout << '?';
      break;
    }
}

int Card::value() const
{
	if (m_rank <= CardRank::r10)
    {
      return (static_cast<int>(m_rank) + 2);
    }
   
    switch (m_rank)
    {
    case CardRank::rJack:
    case CardRank::rQueen:
    case CardRank::rKing:
      return 10;
    case CardRank::rAce:
      return 11;
    default:
      assert(false && "should never happen");
      return 0;
    }
}