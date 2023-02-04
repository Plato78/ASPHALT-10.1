#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
struct GrassLayer {
	sf::Texture texture;
	sf::Sprite sprite;
};
void grasslayerInit(GrassLayer& layer, sf::Vector2f pos, std::string fileName) {
	layer.texture.loadFromFile(fileName);
	layer.sprite.setTexture(layer.texture);
	layer.sprite.setPosition(pos);
}
