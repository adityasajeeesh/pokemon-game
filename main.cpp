#include<iostream>
#include<string>
#include<stdlib.h>
#include "pokemon.h"
#include "player.h"

using namespace std;

int main(){
    Player Bob;
    Bob.addPokemons();
    Bob.returnPokemons();
    return 0;
}