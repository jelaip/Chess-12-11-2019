#pragma once
#include "Board.h"
#include "Pion.h"
#include"Pawn.h"
#include "Bishop.h"
#include"Knight.h"
#include "King.h"
#include"Rook.h"
#include "Queen.h"
class Joueur
{
public:
	Joueur(bool _black,Board* board);
	~Joueur();
	void fillPionList(std::list<Pion*> &pionList);
	std::list<Pion*> pionList;
	bool black;
};

