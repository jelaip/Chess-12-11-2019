#include "Pawn.h"



Pawn::Pawn(std::string nAsset, std::string chemin) : Pion::Pion (chemin)
{
	texture.loadFromFile(path + nAsset);
	sprite.setTexture(texture);
}


Pawn::~Pawn()
{
}
