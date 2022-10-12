#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
#include "pokemon.h"
#include "player.h"
using namespace std;

void Player::addPokemons(){
    Pokemon *pokedex = new Pokemon[20];
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
    srand (time(NULL));
    for (int i=0; i<4; i++){
        randPlayerNum = rand() % 20;
        playerArray[i] = pokedex[randPlayerNum];
    }
}; // used to copy Pokemons from Pokedex into player/computer array
void Player::returnPokemons(){
    for (int i=0; i<4; i++){
        cout << "Name: " << playerArray[i].returnName() << endl;
        cout << "Type: " << playerArray[i].returnType() << endl;
        cout << "Health: " << playerArray[i].returnHealth() << endl;
        cout << "Attack: " << playerArray[i].returnAttack() << endl;
        cout << endl;
    }
}; // shows all Pokemon in player/computer array