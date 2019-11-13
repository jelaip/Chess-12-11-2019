#include "Pawn.h"



Pawn::Pawn(std::string nAsset, std::string chemin, int _x, int _y, bool _black) : Pion::Pion (chemin, _x, _y, _black)
{
	texture.loadFromFile(path + nAsset);
	sprite.setTexture(texture);
}


Pawn::~Pawn()
{
}

std::list<sf::Vector2i>  Pawn::caseMove(std::array< std::array<Pion*, 8>, 8> caseVirtuel) {
	std::list<sf::Vector2i> m;
	if (!black) {
		if (y<=6&&caseVirtuel[x][y + 1] == nullptr) {
			m.push_back(sf::Vector2i(x, y + 1));
			if (y == 1 && caseVirtuel[x][y + 2] == nullptr)
				m.push_back(sf::Vector2i(x, y + 2));
		}
		if(x+1!= 8&& y+1 != 8 &&caseVirtuel[x+1][y+1]!= nullptr&& caseVirtuel[x + 1][y + 1]->black)
			m.push_back(sf::Vector2i(x+1, y + 1));
		if (x != 0 && y + 1 != 8 && caseVirtuel[x - 1][y + 1] != nullptr&& caseVirtuel[x - 1][y + 1]->black)
			m.push_back(sf::Vector2i(x - 1, y + 1));
	}
	else {
		if (y >= 1 && caseVirtuel[x][y - 1] == nullptr) {
			m.push_back(sf::Vector2i(x, y - 1));
			if (y == 6 && caseVirtuel[x][y - 2] == nullptr)
				m.push_back(sf::Vector2i(x, y - 2));
		}
		if (x != 0 && y != 0 && caseVirtuel[x - 1][y - 1] != nullptr&& !caseVirtuel[x - 1][y - 1]->black)
			m.push_back(sf::Vector2i(x - 1, y - 1));
		if (x != 7 && y != 0 && caseVirtuel[x + 1][y - 1] != nullptr&& !caseVirtuel[x + 1][y - 1]->black)
			m.push_back(sf::Vector2i(x + 1, y - 1));
	}
	return m;
}
