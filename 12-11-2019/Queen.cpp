#include "Queen.h"



Queen::Queen(std::string nAsset, std::string chemin):Pion::Pion(chemin)
{
	texture.loadFromFile(path + nAsset);
	sprite.setTexture(texture);
}


Queen::~Queen()
{
}
