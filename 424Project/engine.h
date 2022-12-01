#pragma once

#include <vector>
#include "Entity.h" 
#include "Terrain.h"
#include "Sally.h"
#include "Wall.h"
#include <Windows.h>

using namespace std;

class engine
{

	// size of the frame image
	static const int frameSize = 50;

public:
	// where the player, and terrain objects are initiallized at the start of the game.
	engine();
	
	// used to generate a frame when called based on the current 
	void frameGen();

	// used to update the objects to the next frame
	void frameStepper();

	// used to output frames
	void frameOutput();
	
	//for returning alive status
	bool getLifeStatus();

	//for recording player key inputs
	void playerInput();


private:
	// object containers for the walls, terrain and sally
	vector<Wall> bounds;
	vector<Terrain> obstacles;
	Sally player;

	// counter of the current frame in time
	int frameStep, fps ;
	
	// the array that contains the total frame image
	char frameImg[frameSize][frameSize];

	// changes to false when the player looses
	bool isAlive ;

};

