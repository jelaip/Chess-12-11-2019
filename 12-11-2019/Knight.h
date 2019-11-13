#pragma once
#include "Pion.h"
class Knight :
	public Pion
{
public:
	Knight(std::string nAsset, std::string chemin, int _x, int _y, bool _black);
	virtual ~Knight();
};

