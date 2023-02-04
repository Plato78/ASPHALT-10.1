
#include <SFML/Graphics.hpp>
#include "settings.h"
#include "Grass.h"
#include"Sand.h"
#include"Road.h"
using namespace sf;

int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(width,height), WINDOW_TITLE, Style::Titlebar | Style::Close);
	window.setPosition(Vector2i{ (1920 - (int)width) / 2, 0 });
	window.setFramerateLimit(FPS);

	GrassLayer grass;
	grasslayerInit(grass, Vector2f{ 0.f,0.f }, "Grass-Murova.jpg");
	SandLayer sand;
	sandlayerInit(sand, Vector2f{ 50.f,0.f }, "Sand.jpg");
	RoadLayer road;
	roadlayerInit(road, Vector2f{100.f,0.f }, "Road.jpg");
	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		// Отрисовка окна 
		window.clear();
		window.draw(grass.sprite);
		window.draw(sand.sprite);
		window.draw(road.sprite);
		window.display();
	}

	return 0;
}