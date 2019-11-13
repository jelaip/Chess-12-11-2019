#include "Bishop.h"



/*Bishop::Bishop(std::string nAsset, std::string chemin, int _x, int _y, bool _black):Pion::Pion(chemin, _x, _y, _black)
{
	texture.loadFromFile(path + nAsset);
	sprite.setTexture(texture);
}


Bishop::~Bishop()
{
}*/

std::list<sf::Vector2i>  Bishop::caseMove(std::array< std::array<Pion*, 8>, 8> caseVirtuel) {
	std::list<sf::Vector2i> m;
	int i = 0;
	while (x + i < 8 && y + i < 8) {
		i++;
		if (caseVirtuel[x+i][y+i] == nullptr)
			m.push_back(sf::Vector2i(x+i, y+i));
		if (caseVirtuel[x+i][y+i] != nullptr && black != caseVirtuel[x+i][y+i]->black) {
			m.push_back(sf::Vector2i(x+i, y+i));
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
	while (x - i > -1 && y - i>-1 ) {
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
	
	return m;
}