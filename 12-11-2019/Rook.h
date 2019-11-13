#pragma once
#include "Pion.h"
class Rook :
	public Pion
{
public:/*
	Rook(std::string nAsset, std::string chemin, int _x, int _y, bool _black);
	virtual ~Rook();*/
	virtual std::list<sf::Vector2i>  caseMove(std::array< std::array<Pion*, 8>, 8> caseVirtuel) override;
};

