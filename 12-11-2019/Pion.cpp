#include "Pion.h"

Pion::Pion(std::string chemin, int _x, int _y, bool _black) {
	path = chemin;
	x = _x;
	y = _y;
	black = _black;
}

std::list<sf::Vector2i>  Pion::caseMove(std::array< std::array<Pion*, 8>, 8> caseVirtuel) {
	std::list<sf::Vector2i> m;
	return m;

}