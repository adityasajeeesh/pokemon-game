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
        void addIntoArena(Player a, Computer b); // add selected Pokemon into the arena
        void playerFight(Player a, Computer b); // simplifies code in cpp file
        void battle(Player a, Computer b); // nested loops to determine who is the winner of the round
};

#endif /* _BATTLE_H */
