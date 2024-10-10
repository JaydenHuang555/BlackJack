#pragma once 
#include "defs.h"

namespace jay {
	class Player {
		const byte *name;
		unsigned int score;		
		Player(const byte *name) : name(name){
			score = 0;
		}
		
		void setScore(unsigned int next){
			score = next;
		}

		void resetScore(){
			score = 0;
		}

	};
}; // jay
