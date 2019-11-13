#include "Rook.h"


/*
Rook::Rook(std::string nAsset, std::string chemin, int _x, int _y, bool _black): Pion::Pion(chemin, _x, _y, _black)
{
	texture.loadFromFile(path + nAsset);
	sprite.setTexture(texture);
}


Rook::~Rook()
{
}*/
std::list<sf::Vector2i>  Rook::caseMove(std::array< std::array<Pion*, 8>, 8> caseVirtuel) {
	std::list<sf::Vector2i> m;
	for (int i = x; i <= 7; i++) {
		if (caseVirtuel[i][y] == nullptr)
			m.push_back(sf::Vector2i(i, y));
		if (caseVirtuel[i][y] != nullptr && black != caseVirtuel[i][y]->black) {
			m.push_back(sf::Vector2i(i, y));
			break;
		}
	}
	for (int i = x; i >= 0; i--) {
		if (caseVirtuel[i][y] == nullptr)
			m.push_back(sf::Vector2i(i, y));
		if (caseVirtuel[i][y] != nullptr && black != caseVirtuel[i][y]->black) {
			m.push_back(sf::Vector2i(i, y));
			break;
		}
	}
	for (int i = y; i <= 7; i++) {
		if (caseVirtuel[x][i] == nullptr)
			m.push_back(sf::Vector2i(x, i));
		if (caseVirtuel[x][i] != nullptr && black != caseVirtuel[x][i]->black) {
			m.push_back(sf::Vector2i(x, i));
			break;
		}
	}
	for (int i = y; i >= 0; i--) {
		if (caseVirtuel[x][i] == nullptr)
			m.push_back(sf::Vector2i(x, i));
		if (caseVirtuel[x][i] != nullptr && black != caseVirtuel[x][i]->black) {
			m.push_back(sf::Vector2i(x, i));
			break;
		}
	}
	return m;
}