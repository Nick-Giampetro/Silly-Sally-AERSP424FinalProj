#include "Wall.h"


Wall::Wall() {
	setPos(0, 99);
	setVel(0, 0);
}

Wall::Wall(int x, int y) {
	this->setPos(x, y);
}