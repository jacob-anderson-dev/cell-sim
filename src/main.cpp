#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>
using namespace sf;

int main(int argc, char *argv[])
{
	RenderWindow window(VideoMode(1332, 1550), "Test");
	window.setPosition(Vector2i(0, 0));

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case Event::Closed:
				window.close();
				break;
			default:
				break;
			}
		}
		window.clear();
		window.display();
	}

	return 0;
}