#include <iostream>
#include "Character.h"
#include "World.h"





	Character::Character(char* _name){
		char name= *_name;
	}
	void World::Go(dir nsew){
		int i, exit = 0;
		for (i = 0; i < N_EXIT; i++)
		if (numb[i]->origin == player->actual && nsew == numb[i]->direction ){
			if (numb[i]->door == false){
			player->actual = numb[i]->destiny;
			exit++;
			}
			else{
				printf("There is a creepy door in this way...\n");
			}
		}
		if (exit == 0){
			printf("I can't go to that direction\n");
		}
	}
	/*

	void Character::LookTo(dir test){
		for (i = 0; i < N_EXIT; i++){
			if ((zorkworld->numb[i]->origin == zorkworld->player->actual) && (test == zorkworld->numb[i]->direction)){
				zorkworld->numb[i]->lookdescript();
			}
		}
	

	};
	*/


	//future inventary
