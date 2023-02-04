#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
struct SandLayer {
	sf::Texture texture;
	sf::Sprite sprite;
};
void sandlayerInit(SandLayer& slayer, sf::Vector2f pos, std::string fileName) {
	slayer.texture.loadFromFile(fileName);
	slayer.sprite.setTexture(slayer.texture);
	slayer.sprite.setPosition(pos);
}

