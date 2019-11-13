#pragma once
#include <SFML/Graphics.hpp>
#include <list>
#include <array>
class Pion
{
public:
	Pion(std::string chemin,int _x,int _y,bool _black);
	virtual~Pion();
	int x, y;
	bool black;
	virtual std::list<sf::Vector2i> caseMove(std::array< std::array<Pion*, 8>, 8> caseVirtuel);

protected:
	//sf::Vector2i position;
	std::string path;
	sf::Sprite sprite;
	sf::Texture texture;
private:
	
};



