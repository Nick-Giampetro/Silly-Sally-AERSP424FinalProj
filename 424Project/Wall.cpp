#include "Wall.h"


Wall::Wall() {
	setVel(0, 0);
	
	//initalize array of 0 so IDE is happy
	this->setSprite(); //default wall sprite
	this->defineShape();
}

Wall::~Wall() {}

Wall::Wall(int x, int y, char w) {
	
	this->setPos(x, y);

	//still making IDE happy
	this->setSprite(w);
	this->defineShape();

}


bool Wall::isLocatedAt(int I, int J) {

	//returns the location of walls in the frame
	for (int j = 0; j < frameSize; j++)
	{
		if (imgPos[j][0] == I && imgPos[j][1] == J)
			return true;

	}
	return false;
}

char Wall::spriteData(int I,int J) 
{
	//This sends the wall sprite back
	for (int j = 0; j < frameSize; j++)
	{
		if (imgPos[j][0] == I && imgPos[j][1] == J)
			return wallSprite[j];

	}

}

void Wall::setSprite(char w)
{
	//This allows for the program to change the wall sprite while running (maybe a graphic setting?)
	for (int i = 0; i < frameSize; i++)
	{
		wallSprite[i] = w;
	}
	
}

void Wall::setSprite() //default
{
	//This allows for the program to change the wall sprite while running (maybe a graphic setting?)
	for (int i = 0; i < frameSize; i++)
	{
		wallSprite[i] = '*';
	}

}

void Wall::defineShape()
{
	//creates the wall sprite in the frame so that location data can be extracted for master frame
	for (int j = 0; j < frameSize; j++) {
		imgPos[j][0] = this->getPosX() + j;
		imgPos[j][1] = this->getPosY() ;
	}
	
}