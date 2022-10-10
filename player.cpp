#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
#include "pokemon.h"
#include "player.h"
using namespace std;

int Player::addPokemons(){
    srand (time(NULL));
    for (int i=0; i< 4; i++){
        numbers[i] = rand() % 20; // generates 4 random numbers, to select which Pokemon transfered to player array
    };
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            array[i] = pokedex[numbers[j]]; // error is generated when attempting to access pokedex array, perhaps place one copy in player.cpp and another copy in computer.cpp?
        }
    }
}; // used to copy Pokemons from Pokedex into player/computer array
string Player::returnPokemons(){}; // shows all Pokemon in player/computer array