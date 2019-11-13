#pragma once
#include "Pion.h"
class Bishop :
	public Pion
{
public:
	Bishop(std::string nAsset, std::string chemin, int _x, int _y, bool _black);
	virtual ~Bishop();
};

