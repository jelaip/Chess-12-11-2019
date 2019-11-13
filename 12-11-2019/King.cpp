#include "King.h"


/*
King::King(std::string nAsset, std::string chemin, int _x, int _y, bool _black):Pion::Pion(chemin, _x, _y, _black)
{
	texture.loadFromFile(path + nAsset);
	sprite.setTexture(texture);
}


King::~King()
{
}
*/

std::list<sf::Vector2i>  King::caseMove(std::array< std::array<Pion*, 8>, 8> caseVirtuel) {
	std::list<sf::Vector2i> m;

	if (x + 1 <= 7 && caseVirtuel[x + 1][y] == nullptr ||caseVirtuel[x+1][y]->black!=black) {
		m.push_back(sf::Vector2i(x + 1, y));
	}

	if (x + 1 <= 7 && y - 1 >= 0 && caseVirtuel[x + 1][y - 1] == nullptr || caseVirtuel[x + 1][y - 1]->black != black) {
		m.push_back(sf::Vector2i(x + 1, y - 1));
	}

	if (y - 1 >= 0 && caseVirtuel[x][y - 1] == nullptr || caseVirtuel[x][y - 1]->black != black) {
		m.push_back(sf::Vector2i(x, y - 1));
	}
	if (x - 1 >= 0 && y - 1 >= 0 && caseVirtuel[x - 1][y - 1] == nullptr || caseVirtuel[x - 1][y - 1]->black != black) {
		m.push_back(sf::Vector2i(x - 1, y - 1));
	}
	if (x - 1 >= 0 && caseVirtuel[x - 1][y] == nullptr || caseVirtuel[x - 1][y]->black != black) {
		m.push_back(sf::Vector2i(x - 1, y));
	}

	if (x - 1 >= 0 && y + 1 <= 8 && caseVirtuel[x - 1][y + 1] == nullptr || caseVirtuel[x - 1][y + 1]->black != black) {
		m.push_back(sf::Vector2i(x - 1, y + 1));
	}

	if (y + 1 <= 8 && caseVirtuel[x][y + 1] == nullptr || caseVirtuel[x][y + 1]->black != black) {
		m.push_back(sf::Vector2i(x, y + 1));
	}

	if (x + 1 <= 8 && y + 1 <= 8 && caseVirtuel[x + 1][y - 1] == nullptr || caseVirtuel[x + 1][y + 1]->black != black) {
		m.push_back(sf::Vector2i(x + 1, y + 1));
	}

	return m;
}

