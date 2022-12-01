#include "Entity.h"

Entity::Entity() {
	pX = 0;
	pY = 0;
	vX = 0;
	vY = 0;
}


// postition functions
void Entity::setPos(int I, int J) {
	pX = J;
	pY = I;

	this->defineShape();
}
int Entity::getPosX() {
	return pX;
}
int Entity::getPosY() {
	return pY;
}

//velocity functions
void Entity::setVel(int I, int J) {
	vX = I;
	vY = J;
}
int Entity::getVelX() {
	return vX;
}
int Entity::getVelY() {
	return vY;
}

char Entity::getSprite(int I, int J, char cImg) {
	if (this->isLocatedAt(I, J))
		return this->spriteData(I, J);
	
	return cImg;
}