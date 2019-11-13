#pragma once
#include <SFML/Graphics.hpp>
class Pion
{
public:
	Pion(std::string chemin);
	virtual~Pion();
protected:
	sf::Vector2i position;
	std::string path;
	sf::Sprite sprite;
	sf::Texture texture;
private:
	
};

