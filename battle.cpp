#include<iostream>
#include<string>
#include<stdlib.h>
#include<windows.h>
#include <thread>
#include "pokemon.h"
#include "player.h"
#include "computer.h"
#include "battle.h"
using namespace std;

void Battle::addIntoArena(Player a, Computer b){
    playerAttack = a.playerArray[a.currentPlayerPokemon - 1].attack;
    computerAttack = b.computerArray[b.currentComputerPokemon].attack;
} // add selected Pokemon into the arena

void Battle::battle(Player a, Computer b){
    cout << "BATTLE" << endl;
    while (a.playerArray[a.currentPlayerPokemon].health > 0 && b.computerArray[b.currentComputerPokemon].health > 0){
        cout << "Pokemon " << a.playerArray[a.currentPlayerPokemon - 1].name << " will attack " << b.computerArray[b.currentComputerPokemon].name << "." << endl;
        b.computerArray[b.currentComputerPokemon].health = b.computerArray[b.currentComputerPokemon].health - a.playerArray[a.currentPlayerPokemon - 1].attack;
        Sleep(500);
        cout << "Pokemon " << b.computerArray[b.currentComputerPokemon].name << " has health " << b.computerArray[b.currentComputerPokemon].health << " remaining." << endl;
        Sleep(500);
        if (a.playerArray[a.currentPlayerPokemon - 1].health <= 0 || b.computerArray[b.currentComputerPokemon].health <=0){
            break;
        }
        cout << "Pokemon " << b.computerArray[b.currentComputerPokemon].name << " will attack " << a.playerArray[a.currentPlayerPokemon - 1].name << "." << endl;
        a.playerArray[a.currentPlayerPokemon - 1].health = a.playerArray[a.currentPlayerPokemon - 1].health - b.computerArray[b.currentComputerPokemon].attack;
        Sleep(500);        
        cout << "Pokemon " << a.playerArray[a.currentPlayerPokemon -1].name << " has health " << a.playerArray[a.currentPlayerPokemon - 1].health << " remaining." << endl;
        Sleep(500);
        if (a.playerArray[a.currentPlayerPokemon - 1].health <= 0 || b.computerArray[b.currentComputerPokemon].health <=0){
            break;
        }
    }
    if (b.computerArray[b.currentComputerPokemon].health <= 0){
        Sleep(500);
        cout << "Pokemon " << a.playerArray[a.currentPlayerPokemon - 1].name << " has defeated " << b.computerArray[b.currentComputerPokemon].name << "." << endl;
        b.computerArray[b.currentComputerPokemon].health = 0;
        Sleep(1000);
        cout << "Returning to selection, next round starting soon." << endl;
    }
    else if (a.playerArray[a.currentPlayerPokemon - 1].health <= 0){
        Sleep(500);
        cout << "Pokemon " << b.computerArray[b.currentComputerPokemon].name << " has defeated " << a.playerArray[a.currentPlayerPokemon - 1].name << "." << endl;
        a.playerArray[a.currentPlayerPokemon - 1].health = 0;
        Sleep(1000);
        cout << "Returning to selection, next round starting soon." << endl;
    }
} // nested loops to determine who is the winner of the round
void Battle::lossCount(){};