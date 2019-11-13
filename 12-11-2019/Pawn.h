#pragma once
#include "Pion.h"
class Pawn :
	public Pion
{
public:
	/*
	Pawn(std::string nAsset, std::string chemin, int _x, int _y, bool _black);
	virtual ~Pawn();*/
	virtual std::list<sf::Vector2i>  caseMove(std::array< std::array<Pion*, 8>, 8> caseVirtuel) override;
};

