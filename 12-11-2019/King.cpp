#include "King.h"



King::King(std::string nAsset, std::string chemin):Pion::Pion(chemin)
{
	texture.loadFromFile(path + nAsset);
	sprite.setTexture(texture);
}


King::~King()
{
}
