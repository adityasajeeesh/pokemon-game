#include<iostream>
#include<string>
#ifndef _PLAYER_H
#define _PLAYER_H
#include "pokemon.h"
using namespace std;

// same code replicated for computer class
class Player{
    private:
        Pokemon *playerArray = new Pokemon[4]; // array to store pokemon
        int randPlayerNum = 0; // random number generator store, used for random allocation of Pokemon from pokedex
    public:
        Player(){};
        void addPokemons(); // used to copy Pokemons from Pokedex into player array
        void returnPokemons(); // shows all Pokemon in player array
        bool winLossStatus(); // boolean operator which determines if player loses (all Pokemon have 0 health) or player wins (all computer Pokemon have 0 health)
};

#endif /* _PLAYER_H */
