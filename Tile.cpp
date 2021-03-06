#include "Tile.h"
// LEGEND: 0 = grass, 1 = patchfloor, 2 = dirt

void Tile::setIndex(int number) {
	
	if (number == 0) {
		sprite.setTextureRect(sf::IntRect(32*0, 0, 32, 32));
		rect.setFillColor(sf::Color(120,120,120,255));
		collidable = false;
	}
	else if (number == 1) {
		sprite.setTextureRect(sf::IntRect(32*2, 0, 32, 32));
		rect.setFillColor(sf::Color(200,200,0,255));
		collidable = true;
	}
	else if (number == 2) {
		sprite.setTextureRect(sf::IntRect(32 * 4, 0, 32, 32));
		rect.setFillColor(sf::Color(0,0,0,255));
		collidable = false;
	}
	else {
		collidable = false;
	}
}

unsigned int Tile::getWidth()
{
	return width;
}

unsigned int Tile::getHeight()
{
	return height;
}

Tile::Tile() : collidable(false)
{
	rect.setSize(sf::Vector2f(width, height));
	rect.setFillColor(sf::Color(255,255,255,100));
	rect.setPosition(0, 0);
	sprite.setPosition(rect.getPosition());
	sprite.setTextureRect(sf::IntRect(32 * 0, 0, 32, 32));
}


Tile::~Tile()
{
}
