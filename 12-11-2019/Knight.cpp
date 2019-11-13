#include "Knight.h"



Knight::Knight(std::string nAsset, std::string chemin):Pion::Pion(chemin)
{
	texture.loadFromFile(path + nAsset);
	sprite.setTexture(texture);
}


Knight::~Knight()
{
}
