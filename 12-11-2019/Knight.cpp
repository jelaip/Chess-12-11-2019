#include "Knight.h"



Knight::Knight(std::string nAsset, std::string chemin, int _x, int _y, bool _black):Pion::Pion(chemin, _x, _y, _black)
{
	texture.loadFromFile(path + nAsset);
	sprite.setTexture(texture);
}

std::list<sf::Vector2i>  Knight::caseMove(std::array< std::array<Pion*, 8>, 8> caseVirtuel) {
	
	std::list<sf::Vector2i> m;

	if (x+2 <=7 && y+1<=7 && caseVirtuel[x + 2][y + 1] == nullptr || caseVirtuel[x + 2][y + 1] != nullptr && caseVirtuel[x + 2][y + 1]->black != black) 
	{
		m.push_back(sf::Vector2i(x + 2, y + 1));
	}

	if (x + 2 <= 7 && y - 1 >= 0 && caseVirtuel[x + 2][y - 1] == nullptr || caseVirtuel[x + 2][y - 1] != nullptr && caseVirtuel[x + 2][y - 1]->black != black) {
		m.push_back(sf::Vector2i(x + 2, y - 1));
	}

	if (x - 2 >=0 && y - 1 >=0 && caseVirtuel[x - 2][y - 1] == nullptr || caseVirtuel[x - 2][y - 1] != nullptr && caseVirtuel[x - 2][y - 1]->black != black) {
		m.push_back(sf::Vector2i(x - 2, y - 1));
	}

	if (x - 2 >= 0 && y + 1 <= 7 && caseVirtuel[x - 2][y + 1] == nullptr || caseVirtuel[x - 2][y + 1] != nullptr && caseVirtuel[x - 2][y + 1]->black != black) {
		m.push_back(sf::Vector2i(x - 2, y + 1));
	}

	if (x + 1 <= 7 && y + 2 <= 7 && caseVirtuel[x + 1][y + 2] == nullptr || caseVirtuel[x + 1][y + 2] != nullptr && caseVirtuel[x + 1][y + 2]->black != black)
	{
		m.push_back(sf::Vector2i(x + 1, y + 2));
	}

	if (x + 1 <= 7 && y - 2 >= 0 && caseVirtuel[x + 1][y - 2] == nullptr || caseVirtuel[x + 1][y - 2] != nullptr && caseVirtuel[x + 1][y - 2]->black != black) {
		m.push_back(sf::Vector2i(x + 1, y - 2));
	}

	if (x - 1 >= 0 && y - 2 >= 0 && caseVirtuel[x - 1][y - 2] == nullptr || caseVirtuel[x - 1][y - 2] != nullptr && caseVirtuel[x - 1][y - 2]->black != black) {
		m.push_back(sf::Vector2i(x - 1, y - 2));
	}

	if (x - 1 >= 0 && y + 2 <= 7 && caseVirtuel[x - 1][y + 2] == nullptr || caseVirtuel[x - 1][y + 2] != nullptr && caseVirtuel[x - 1][y + 2]->black != black) {
		m.push_back(sf::Vector2i(x - 1, y + 2));
	}

	return m;

}

Knight::~Knight()
{
}
