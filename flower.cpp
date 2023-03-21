#include "flower.h"

flower::flower(int x, int y, int c[3]) {
	xpos = x;
	ypos = y;
	color[0] = c[0]; //if our array was any longer I would have used a for loop here :)
	color[1] = c[1];
	color[2] = c[2];
}


void flower::draw(sf::RenderWindow& window) {
	stem.setPosition(xpos+2, ypos);
	stem.setFillColor(sf::Color(0, 200, 0));
	stem.setSize(sf::Vector2f(15, 40));
	window.draw(stem);


	petal.setRadius(10);
	petal.setFillColor((sf::Color(color[0], color[1], color[2]))); //noticing accessing slots of an array is just like getting to slots of a list
	petal.setPosition(xpos, ypos);
	window.draw(petal);
	petal.setPosition(xpos+10, ypos-10);
	window.draw(petal);
	petal.setPosition(xpos - 10, ypos - 10);
	window.draw(petal);
	petal.setPosition(xpos, ypos - 20);
	window.draw(petal);

	anthers.setRadius(10);
	anthers.setFillColor((sf::Color(200,200,0)));
	anthers.setPosition(xpos, ypos-10);
	window.draw(anthers);
}


void flower::changeColor(int c[3]) {
	int chance = rand() % 100;

	if (chance < 5) {
		color[0] = rand() % 255;
		color[1] = rand() % 255;
		color[2] = rand() % 255;
	}





}
