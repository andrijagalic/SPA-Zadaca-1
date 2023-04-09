#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow &w)
{
	window = &w;

	krug.setRadius(100.f);
	krug.setFillColor(sf::Color::Yellow);
	krug.setOutlineThickness(80.f);
	krug.setOutlineColor(sf::Color::Red);
	krug.setPosition(100.f, 100.f);

	stabljika.setSize(sf::Vector2f(220.f, 20.f));
	stabljika.rotate(90);
	stabljika.setFillColor(sf::Color::Green);
	stabljika.move(polozajStabljike());

	list.setPointCount(4);
	list.setFillColor(sf::Color::Green);
	list.setPoint(0, sf::Vector2f(0, 400));
	list.setPoint(1, sf::Vector2f(120, 280));
	list.setPoint(2, sf::Vector2f(280, 180));
	list.setPoint(3, sf::Vector2f(190, 320));
	list.move(polozajLista());

	kazaljkaM.setSize(sf::Vector2f(35.f, 5.f));
	kazaljkaM.setFillColor(sf::Color::Magenta);
	kazaljkaM.setPosition(732.f, 70.f);

	kazaljkaV.setSize(sf::Vector2f(50.f, 3.f));
	kazaljkaV.setFillColor(sf::Color::Cyan);
	kazaljkaV.setPosition(730.f, 70.f);

	sat.setRadius(60.f);
	sat.setFillColor(sf::Color::Blue);
	sat.setPosition(670.f, 10.f);

	tocka.setRadius(7.f);
	tocka.setFillColor(sf::Color::Black);
	tocka.setPosition(724.f, 64.f);
}

sf::Vector2f Cvijet::polozajStabljike()
{
	auto s = stabljika.getPosition();
	s.x = 215;
	s.y = 379;

	return s;
}

sf::Vector2f Cvijet::polozajLista()
{
	auto s = list.getPosition();
	s.x = 200;
	s.y = 100;
	
	return s;
}


void Cvijet::draw()
{
	if (frameClock.getElapsedTime().asMilliseconds() >= 60)
	{
		rotate();
		frameClock.restart();
	}

	window->draw(stabljika, t);
	window->draw(list, t);
	window->draw(krug, t);
	window->draw(sat, t);
	window->draw(kazaljkaM, t);
	window->draw(kazaljkaV, t);
	window->draw(tocka, t);
	
}

void Cvijet::rotate()
{
	kazaljkaM.rotate(2);
	kazaljkaV.rotate(20);
}