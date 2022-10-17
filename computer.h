#include<iostream>
#include<string>
#ifndef _COMPUTER_H
#define _COMPUTER_H
#include "pokemon.h"
using namespace std;

// same code as Computer class
class Computer{
    private:
        int randComputerNum = 0; // random number generator store, used for random allocation of Pokemon from pokedex
    public:
        Computer(){};
        Pokemon *computerArray = new Pokemon[4]; // array to store pokemon
        void addPokemons(); // used to copy Pokemons from Pokedex into computer array
        void returnPokemons(); // shows all Pokemon in computer array
        void randomPokemonSelectOrder(); // automated process to select the Pokemon to battle
        int currentComputerPokemon = 0; // holds the current Pokemon index to put into battle
        bool winLossStatus(); // boolean operator which determines if computer loses (all Pokemon have 0 health) or computer wins (all player Pokemon have 0 health)
};

#endif /* _COMPUTER_H */
