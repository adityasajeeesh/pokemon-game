#include<iostream>
#include<string>
#ifndef _PLAYER_H
#define _PLAYER_H
#include "pokemon.h"
using namespace std;

// same code replicated for computer class
class Player{
    private:
        string playerName; // stores the player's name
        Pokemon *playerArray = new Pokemon[4]; // array to store pokemon
        int randPlayerNum = 0; // random number generator store, used for random allocation of Pokemon from pokedex
    public:
        Player(){};
        Player(string name){
            playerName = name;
        }
        void setName(); // sets the player's name
        string getName(); // returns the player's name
        void addPokemons(); // used to copy Pokemons from Pokedex into player array
        void returnPokemons(); // shows all Pokemon in player array
        int currentPlayerPokemon = 0; // holds the current Pokemon index to put into battle
        bool winLossStatus(); // boolean operator which determines if player loses (all Pokemon have 0 health) or player wins (all computer Pokemon have 0 health)
};

#endif /* _PLAYER_H */
