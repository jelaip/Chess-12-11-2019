#include "Rook.h"



Rook::Rook(std::string nAsset, std::string chemin): Pion::Pion(chemin)
{
	texture.loadFromFile(path + nAsset);
	sprite.setTexture(texture);
}


Rook::~Rook()
{
}
