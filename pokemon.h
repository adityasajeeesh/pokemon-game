#include <iostream>
#include <string>
#ifndef POKEMON_H
#define POKEMON_H
using namespace std;

class Pokemon{
    public:
        Pokemon() {}
        string name;
        string type;
        int health;
        int attack;
        Pokemon(string pokeName, string pokeType, int healthSize, int attackSize){
            name = pokeName;
            type = pokeType;
            health= healthSize;
            attack = attackSize;
        };
        string returnName(); // returns the Pokemon name
        string returnType(); // returns the Pokemon type
        int returnHealth(); // returns the health amount
        int returnAttack(); // returns the attack amount
};
#endif 