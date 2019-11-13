#include "Queen.h"



Queen::Queen(std::string nAsset, std::string chemin, int _x, int _y, bool _black):Pion::Pion(chemin, _x, _y, _black)
{
	texture.loadFromFile(path + nAsset);
	sprite.setTexture(texture);
}


Queen::~Queen()
{
}

std::list<sf::Vector2i>  Queen::caseMove(std::array< std::array<Pion*, 8>, 8> caseVirtuel) {
	std::list<sf::Vector2i> m;
	int i = 0;
	while (x + i < 8 && y + i < 8) {
		i++;
		if (caseVirtuel[x + i][y + i] == nullptr)
			m.push_back(sf::Vector2i(x + i, y + i));
		if (caseVirtuel[x + i][y + i] != nullptr && black != caseVirtuel[x + i][y + i]->black) {
			m.push_back(sf::Vector2i(x + i, y + i));
			break;
		}
	}
	i = 0;
	while (x - i > -1 && y + i < 8) {
		i++;
		if (caseVirtuel[x - i][y + i] == nullptr)
			m.push_back(sf::Vector2i(x - i, y + i));
		if (caseVirtuel[x - i][y + i] != nullptr && black != caseVirtuel[x - i][y + i]->black) {
			m.push_back(sf::Vector2i(x - i, y + i));
			break;
		}
	}
	i = 0;
	while (x - i > -1 && y - i > -1) {
		i++;
		if (caseVirtuel[x - i][y - i] == nullptr)
			m.push_back(sf::Vector2i(x - i, y - i));
		if (caseVirtuel[x - i][y - i] != nullptr && black != caseVirtuel[x - i][y - i]->black) {
			m.push_back(sf::Vector2i(x - i, y - i));
			break;
		}
	}
	i = 0;
	while (x + i < 8 && y - i > -1) {
		i++;
		if (caseVirtuel[x + i][y - i] == nullptr)
			m.push_back(sf::Vector2i(x + i, y - i));
		if (caseVirtuel[x + i][y - i] != nullptr && black != caseVirtuel[x + i][y - i]->black) {
			m.push_back(sf::Vector2i(x + i, y - i));
			break;
		}
	}

	for (int j = x; j <= 7; j++) {
		if (caseVirtuel[j][y] == nullptr)
			m.push_back(sf::Vector2i(j, y));
		if (caseVirtuel[j][y] != nullptr && black != caseVirtuel[j][y]->black) {
			m.push_back(sf::Vector2i(j, y));
			break;
		}
	}
	for (int j = x; j >= 0; j--) {
		if (caseVirtuel[j][y] == nullptr)
			m.push_back(sf::Vector2i(j, y));
		if (caseVirtuel[j][y] != nullptr && black != caseVirtuel[j][y]->black) {
			m.push_back(sf::Vector2i(j, y));
			break;
		}
	}
	for (int j = y; j <= 7; j++) {
		if (caseVirtuel[x][j] == nullptr)
			m.push_back(sf::Vector2i(x, j));
		if (caseVirtuel[x][j] != nullptr && black != caseVirtuel[x][j]->black) {
			m.push_back(sf::Vector2i(x, j));
			break;
		}
	}
	for (int j = y; j >= 0; j--) {
		if (caseVirtuel[x][j] == nullptr)
			m.push_back(sf::Vector2i(x, j));
		if (caseVirtuel[x][j] != nullptr && black != caseVirtuel[x][j]->black) {
			m.push_back(sf::Vector2i(x, j));
			break;
		}
	}
	return m;
}
