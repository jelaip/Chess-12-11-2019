#pragma once
#include "Pion.h"
class Pawn :
	public Pion
{
public:
	
	Pawn(std::string nAsset, std::string chemin);
	virtual ~Pawn();
};

