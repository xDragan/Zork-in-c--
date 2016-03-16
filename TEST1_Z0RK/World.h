#ifndef _World
#define _World
#include <iostream>
#include "Rooms.h"
#include "Character.h"
#define N_ROOM 25
#define N_EXIT 59

// private ni lectura ni modificar
// const si lectura no modificar
class World{

public:
	World();
	~World();
public:
	bool keyboard(const char* input);
	void impo();
	void Help();
	void Go(dir);
	void Open(dir);
	void Close(dir);
public:
	Room* test[N_ROOM];
	Room* subway;
	Exit* numb[N_EXIT];
	Character* player;
private:
	int i;
	//Room* Base, *House, *Forest;
	//Room* test[5][5];
};
#endif