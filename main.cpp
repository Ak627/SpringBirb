#include<SFML/Graphics.hpp>
#include<iostream>
#include "birb.h"
#include "flower.h"
using namespace std;

int main() {
	srand(time(NULL));

	//this next line is an array. Arrays are a lot like python lists.
	int birbColor[] = { 255, 200, 200 }; //set up an array of colors to make your birb PINK!
	int birbColor2[] = { 100, 200, 200 };
	int birbColor3[] = { 200, 200, 100 };

	
	birb Alex(200, 200, birbColor); //instantiate 1 birb
	birb BillyBob(300, 300, birbColor2);
	birb Burb(250, 400, birbColor3);
	birb Derrick(350, 200, birbColor2);
	birb B(200, 400, birbColor);
	birb Tam(700, 700, birbColor3);


	int flowerColor[] = { 230,230,250 };

	flower f1(400, 400, flowerColor);
	flower f2(500, 600, flowerColor);
	flower f3(200, 700, flowerColor);
	flower f4(500, 100, flowerColor);


	sf::RenderWindow window(sf::VideoMode(800, 800), "Happy Spring!"); //set up game window


	while (1) {//GAME LOOP OMG
		window.clear();

		
		Alex.fly(window);
		BillyBob.fly(window);
		Burb.fly(window);
		Derrick.fly(window);
		B.fly(window);
		Tam.fly(window);


		Alex.draw(window);
		BillyBob.draw(window);
		Burb.draw(window);
		Derrick.draw(window);
		B.draw(window);
		Tam.draw(window);
		
		f1.draw(window);
		f2.draw(window);
		f3.draw(window);
		f4.draw(window);


		int chance = rand() % 100;

		if (chance < 5) {
			f1.changeColor(flowerColor);
			f2.changeColor(flowerColor);
			f3.changeColor(flowerColor);
			f4.changeColor(flowerColor);
		}
		window.display();
	}
}


