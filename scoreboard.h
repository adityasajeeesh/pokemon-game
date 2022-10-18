#include<iostream>
#include<string>
#include<stdlib.h>
#include "pokemon.h"
#include "player.h"
#include "computer.h"
#include "battle.h"
#ifndef _SCOREBOARD_H
#define _SCOREBOARD_H
using namespace std;

class Scoreboard : public Battle{
    private:
        int computerLoss = 0; // counts number of Pokemon with health >= 0
        int playerLoss = 0; // counts number of Pokemon with health >= 0
    public:
        Scoreboard(){};
        void lossCount(Player a); // incremental loss counter for player's Pokemon
        void lossCount(Computer b); // incremental loss counter for computer's Pokemon
        void resultOutput(Player a, Computer b); // displays the winner of the battle
};
#endif