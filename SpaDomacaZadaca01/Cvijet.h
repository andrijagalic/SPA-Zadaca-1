#pragma once
#include <SFML/Graphics.hpp>
class Cvijet
{
private:
	sf::Transform t;
	sf::RenderWindow* window;
	sf::CircleShape krug;
	sf::RectangleShape stabljika;
	sf::ConvexShape list;
	sf::Vector2f polozajStabljike();
	sf::Vector2f polozajLista();
	sf::RectangleShape kazaljkaM;
	sf::RectangleShape kazaljkaV;
	sf::CircleShape sat;
	sf::CircleShape tocka;
	sf::Clock frameClock;
	void rotate();
public:
	explicit Cvijet(sf::RenderWindow & w);
	void draw();
};