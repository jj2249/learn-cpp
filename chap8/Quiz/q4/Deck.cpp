#include "Deck.hpp"

Deck::Deck()
{
	Deck::createDeck();
}

void Deck::createDeck() const
{
	Deck::indexType card{ 0 };

	auto suits{ static_cast<Deck::indexType>(CardSuit::maxSuits)};
	auto ranks{ static_cast<Deck::indexType>(CardRank::maxRanks)};

	for (Deck::indexType suit{ 0 }; suit < suits; ++suit)
	{
		for (Deck::indexType rank{ 0 }; rank <ranks; ++rank)
		{
			m_deck[card].m_suit = static_cast<CardSuit>(suit);
			m_deck[card].m_rank = static_cast<CardRank>(rank);
			++card;
		}
	}
}


void Deck::printDeck() const
{
	for (const auto &card : m_eck)
	{
		printCard(card);
		std::cout << ' ';
	}
	std::cout << '\n';
}

void Deck::shuffleDeck() const
{
	static std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
	std::shuffle(m_deck.begin(), m_deck.end(), mt)
}
