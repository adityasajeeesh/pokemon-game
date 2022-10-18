#include<iostream>
#include<string>
#include<stdlib.h>
#include<ctime>
#include<windows.h>
#include<algorithm> // for std::random_shuffle
#include "pokemon.h"
#include "computer.h"
using namespace std;

void Computer::addPokemons(){
    Pokemon *pokedex = new Pokemon[20]; // Pokedex of all possible Pokemons
    pokedex[0] = Pokemon("Growlithe", "Fire", 40, 15);
    pokedex[1] = Pokemon("Darmantian", "Fire", 70, 27);
    pokedex[2] = Pokemon("Braixen", "Fire", 40, 12);
    pokedex[3] = Pokemon("Litten", "Fire", 30, 12);
    pokedex[4] = Pokemon("Magmar", "Fire", 40, 18);
    pokedex[5] = Pokemon("Simipour", "Water", 50, 18);
    pokedex[6] = Pokemon("Vaporeon", "Water", 80, 12);
    pokedex[7] = Pokemon("Octillery", "Water", 50, 21);
    pokedex[8] = Pokemon("Mudkip", "Water", 30, 15);
    pokedex[9] = Pokemon("Oshawott", "Water", 40, 12);
    pokedex[10] = Pokemon("Pichu", "Electric", 20, 9);
    pokedex[11] = Pokemon("Boltund", "Electric", 50, 18);
    pokedex[12] = Pokemon("Luxray", "Electric", 50, 24);
    pokedex[13] = Pokemon("Mareep", "Electric", 40, 9);
    pokedex[14] = Pokemon("Tynamo", "Electric", 30, 12);
    pokedex[15] = Pokemon("Gossifleur", "Grass", 30, 9);
    pokedex[16] = Pokemon("Servine", "Grass", 40, 12);
    pokedex[17] = Pokemon("Pansage", "Grass", 30, 12);
    pokedex[18] = Pokemon("Treecko", "Grass", 30, 9);
    pokedex[19] = Pokemon("Cherubi", "Grass", 30, 9);
    srand (2838064159); // random seed generated from a random Ethereum wallet
    for (int i=0; i<4; i++){
        randComputerNum = rand() % 20;
        computerArray[i] = pokedex[randComputerNum];
    }
}; // used to copy Pokemons from Pokedex into player array
void Computer::returnPokemons(){
    for (int i=0; i<4; i++){
        cout << "[" << i+1 << "]" << endl;
        cout << "Name: " << computerArray[i].returnName() << endl;
        cout << "Type: " << computerArray[i].returnType() << endl;
        cout << "Attack: " << computerArray[i].returnAttack() << endl;
        cout << "Health: " << computerArray[i].returnHealth() << endl;
        cout << endl;
        Sleep(500);
    }
}; // returns all Pokemon in player array, including statistics

int randomseed(int i){
    return rand()%i;
}

void Computer::randomPokemonSelectOrder(){
    srand(unsigned(time(0)));
    random_shuffle(&selectArray[0], &selectArray[3], randomseed);
}