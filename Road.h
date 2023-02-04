#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
struct RoadLayer {
	sf::Texture texture;
	sf::Sprite sprite;
};
void roadlayerInit(RoadLayer& slayer, sf::Vector2f pos, std::string fileName) {
	slayer.texture.loadFromFile(fileName);
	slayer.sprite.setTexture(slayer.texture);
	slayer.sprite.setPosition(pos);
}

