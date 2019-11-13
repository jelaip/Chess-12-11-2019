#pragma once
#include "Pion.h"
class Bishop :
	public Pion
{
public:
	//Bishop(std::string nAsset, std::string chemin, int _x, int _y, bool _black);
	//virtual ~Bishop();
	virtual std::list<sf::Vector2i>  caseMove(std::array< std::array<Pion*, 8>, 8> caseVirtuel) override;
};

