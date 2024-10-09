#pragma once 
#include "ArrayList.h"
#include "Player.h"

namespace jay {
	class GameEngine {
		ArrayList<Player*> *players = 0;
public:
		GameEngine(){
			this->players = new ArrayList<Player*>();
		}

		void addPlayer(Player *player){
			players->add(player);
		}

		

		~GameEngine(){
			if(players){
				for(int i = 0; i < players->getSize(); i++) delete (*players)[i];
				delete players;
			}
			players = 0;
		}

	};
}; // jay
