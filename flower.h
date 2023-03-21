#pragma once
#include<SFML/Graphics.hpp>


class flower
{
private: //private stuff can only be seen/used by fellow class members

//usually you keep variables private and functions public, but they can definitely not be that way too.
	int xpos;
	int ypos;
	int color[3];


	sf::CircleShape petal;
	sf::CircleShape anthers;
	sf::RectangleShape stem;


public:
	flower(int x, int y, int c[3]); //parameterized constructor
	void draw(sf::RenderWindow& window);
	void changeColor(int c[3]);

};

