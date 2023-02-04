
#include <SFML/Graphics.hpp>
#include "settings.h"
#include "Grass.h"
#include"Sand.h"
#include"Road.h"
using namespace sf;

int main()
{
	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(width,height), WINDOW_TITLE, Style::Titlebar | Style::Close);
	window.setPosition(Vector2i{ (1920 - (int)width) / 2, 0 });
	window.setFramerateLimit(FPS);

	GrassLayer grass;
	grasslayerInit(grass, Vector2f{ 0.f,0.f }, "Grass-Murova.jpg");
	SandLayer sand;
	sandlayerInit(sand, Vector2f{ 50.f,0.f }, "Sand.jpg");
	RoadLayer road;
	roadlayerInit(road, Vector2f{100.f,0.f }, "Road.jpg");
	// ������� ���� ����������. �����������, ���� ������� ����
	while (window.isOpen())
	{
		// ������������ ������� ������� � �����
		Event event;
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == Event::Closed)
				// ����� ��������� ���
				window.close();
		}
		// ��������� ���� 
		window.clear();
		window.draw(grass.sprite);
		window.draw(sand.sprite);
		window.draw(road.sprite);
		window.display();
	}

	return 0;
}