#include <SFML/Graphics.hpp>


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Shamrocks");
	sf::CircleShape circle;
	sf::RectangleShape rect;



	while (window.isOpen())//GAME LOOP--------------------------------
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		}

		//render section-------------------------------
		window.clear();

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(200, 200);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(250, 200);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(225, 150);
		window.draw(circle);

		rect.setPosition(245, 200);
		rect.setFillColor(sf::Color(0, 100, 0));
		rect.setSize(sf::Vector2f(20, 80));
		window.draw(rect);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 255, 255)));
		circle.setPosition(300, 200);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 255, 255)));
		circle.setPosition(350, 200);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 255, 255)));
		circle.setPosition(325, 150);
		window.draw(circle);

		rect.setPosition(345, 200);
		rect.setFillColor(sf::Color(0, 255, 255));
		rect.setSize(sf::Vector2f(20, 80));
		window.draw(rect);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(100, 255, 0)));
		circle.setPosition(330, 300);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(100, 255, 0)));
		circle.setPosition(380, 300);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(100, 255, 0)));
		circle.setPosition(355, 250);
		window.draw(circle);

		rect.setPosition(375, 300);
		rect.setFillColor(sf::Color(100, 255, 0));
		rect.setSize(sf::Vector2f(20, 80));
		window.draw(rect);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(100, 0, 0)));
		circle.setPosition(430, 300);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(100, 0, 0)));
		circle.setPosition(480, 300);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(100, 0, 0)));
		circle.setPosition(455, 250);
		window.draw(circle);

		rect.setPosition(475, 300);
		rect.setFillColor(sf::Color(100, 0, 0));
		rect.setSize(sf::Vector2f(20, 80));
		window.draw(rect);
		window.display();

	}//end game loop-------------------------------------------------



	return 0;
} //end main
