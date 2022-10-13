#include<iostream>
#include<string>
#include<stdlib.h>
#include "pokemon.h"
#include "player.h"
#include "computer.h"

using namespace std;

int main(){
    Player Bob;
    Bob.addPokemons();
    Bob.returnPokemons();
    std::cout << "------" << endl;
    Computer comp;
    comp.addPokemons();
    comp.returnPokemons();
    return 0;
}