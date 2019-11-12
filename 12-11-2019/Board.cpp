#include "Board.h"
Board::Board(int taillePlateau) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			caseVirtuel[i][j] = nullptr;
		}
	}
	tailleCase = taillePlateau / 8;
	int index = 0;
	bool black = false;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			sf::RectangleShape r;
			r.setSize(sf::Vector2f(tailleCase, tailleCase));
			if (black) r.setFillColor(sf::Color::Black);
			else r.setFillColor(sf::Color::White);
			black = !black;
			r.setPosition(i*tailleCase, j* tailleCase);
			caseReel[index] = r;
			index++;
		}
		black = !black;
	}
}

Board::~Board() {
	for (sf::RectangleShape r : caseReel)
	{
		//delete r;
	}

}
