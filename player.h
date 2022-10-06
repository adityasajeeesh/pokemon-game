#ifndef _PLAYER_H
#define _PLAYER_H
#include "pokemon.h"
#include "pokedex.cpp"
using namespace std;

class Player{
    private:
        Pokemon array[4];
    public:
        Player() {}
        Player(Pokemon playerArray[4]){
            playerArray = array;
        };
        string returnPokemons(){}; // copies Pokemon from Pokedex into player array

};

#endif /* _PLAYER_H */
