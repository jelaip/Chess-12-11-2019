#pragma once
#include <array>
#include <SFML/Graphics.hpp> 
#include "Pion.h"
class Board
{
public:
	int tailleCase;
	std::array<sf::RectangleShape, 64> caseReel;
	std::array< std::array<Pion*, 8>, 8> caseVirtuel;
	Board(int taillePlateau);
	~Board();
	enum ColorJoueur
	{
		Blanc,
		Noir
	};


};

