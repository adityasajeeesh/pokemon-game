#include<iostream>
#include<string>
#include<stdlib.h>
#include "pokemon.h"
#include "player.h"
#include "computer.h"
#ifndef _BATTLE_H
#define _BATTLE_H

using namespace std;

class Battle : public Player, public Computer{
    public:
        int playerAttack = 0; // stores player Pokemon attack value
        int computerAttack = 0; // stores computer Pokemon attack value
        Battle(){}; // default constructor
        void addIntoArena(Player a, Computer b); // stores Pokemon attack values into a designated variable
        void battle(Player a, Computer b); // nested loops to determine who is the winner of the round
        virtual void lossCount(); // counts the number of Pokemon with health <= 0, used within scoreboard
};

#endif /* _BATTLE_H */
