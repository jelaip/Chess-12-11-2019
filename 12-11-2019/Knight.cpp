#include "Knight.h"



Knight::Knight(std::string nAsset, std::string chemin, int _x, int _y, bool _black):Pion::Pion(chemin, _x, _y, _black)
{
	texture.loadFromFile(path + nAsset);
	sprite.setTexture(texture);
}


Knight::~Knight()
{
}
