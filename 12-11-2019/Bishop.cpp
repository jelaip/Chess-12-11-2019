#include "Bishop.h"



Bishop::Bishop(std::string nAsset, std::string chemin):Pion::Pion(chemin)
{
	texture.loadFromFile(path + nAsset);
	sprite.setTexture(texture);
}


Bishop::~Bishop()
{
}
