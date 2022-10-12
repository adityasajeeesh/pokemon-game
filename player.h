#include<iostream>
#include<string>
#ifndef _PLAYER_H
#define _PLAYER_H
#include "pokemon.h"
#include "pokedex.h"
using namespace std;

// same code replicated for computer class
class Player{
    private:
        Pokemon array[4]; // array to store pokemon
        int numbers[4];
    public:
        Player() {}
        Player(Pokemon playerArray[4]){
            playerArray = array;
        };
        int addPokemons(){}; // used to copy Pokemons from Pokedex into player/computer array
        string returnPokemons(){}; // shows all Pokemon in player/computer array

};

#endif /* _PLAYER_H */
