#ifndef DECK_h
#define DECK_h

#include "Card.hpp"

#include <array>
#include <iostream>
#include <random>

class Deck
{

public:
	using deckType = std::array<Card, 52>;
	using indexType = deckType::size_type;

	Deck();

	void createDeck() const;

	void printDeck() const;

	void shuffleDeck() const;

private:
	deckType m_deck {};

};

#endif