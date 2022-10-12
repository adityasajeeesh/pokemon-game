#include <iostream>
#include <string>
#ifndef _POKEDEX_H_
#define _POKEDEX_H_
#include "pokemon.h"
using namespace std;

Pokemon pokedex[20]; // created in the Pokemon pokedex header file, for inheritance purposes

Pokemon pokedex[0] = Pokemon("Growlithe", "Fire", 40, 15);
Pokemon pokedex[1] = Pokemon("Darmantian", "Fire", 70, 27);
Pokemon pokedex[2] = Pokemon("Braixen", "Fire", 40, 12);
Pokemon pokedex[3] = Pokemon("Litten", "Fire", 30, 12);
Pokemon pokedex[4] = Pokemon("Magmar", "Fire", 40, 18);
Pokemon pokedex[5] = Pokemon("Simipour", "Water", 50, 18);
Pokemon pokedex[6] = Pokemon("Vaporeon", "Water", 80, 12);
Pokemon pokedex[7] = Pokemon("Octillery", "Water", 50, 21);
Pokemon pokedex[8] = Pokemon("Mudkip", "Water", 30, 15);
Pokemon pokedex[9] = Pokemon("Oshawott", "Water", 40, 12);
Pokemon pokedex[10] = Pokemon("Pichu", "Electric", 20, 9);
Pokemon pokedex[11] = Pokemon("Boltund", "Electric", 50, 18);
Pokemon pokedex[12] = Pokemon("Luxray", "Electric", 50, 24);
Pokemon pokedex[13] = Pokemon("Mareep", "Electric", 40, 9);
Pokemon pokedex[14] = Pokemon("Tynamo", "Electric", 30, 12);
Pokemon pokedex[15] = Pokemon("Gossifleur", "Grass", 30, 9);
Pokemon pokedex[16] = Pokemon("Servine", "Grass", 40, 12);
Pokemon pokedex[17] = Pokemon("Pansage", "Grass", 30, 12);
Pokemon pokedex[18] = Pokemon("Treecko", "Grass", 30, 9);
Pokemon pokedex[19] = Pokemon("Cherubi", "Grass", 30, 9);

#endif