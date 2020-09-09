#ifndef CARD_H
#define CARD_H

enum class CardSuit
{
  sClub,
  sDiamond,
  sHeart,
  sSpade,

  maxSuits
};

enum class CardRank
{
  r2,
  r3,
  r4,
  r5,
  r6,
  r7,
  r8,
  r9,
  r10,
  rJack,
  rQueen,
  rKing,
  rAce,

  maxRanks
};

class Card
{
public:
	Card(const CardRank &rank, const CardSuit &suit);
	void print() const;
	int value() const;

private:
	CardRank m_rank {};
	CardSuit m_suit {};
};

#endif