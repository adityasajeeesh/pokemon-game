#include<iostream>
#include<string>
#include<stdlib.h>
#include<windows.h> // used for system(pause)
#include "pokemon.h"
#include "player.h"
#include "computer.h"

using namespace std;

int main(){
    // introductory paragraph/rules
    {cout << "Welcome to Pokemon!" << endl;
    Sleep(700); // used to delay time (in milliseconds) from previous command to next command
    // unsure if Sleep will work on Mac but it is worth a shot
    cout << "The battle follows as such: " << endl;
    Sleep(700);
    cout << "- The computer and the player are each assigned 4 Pokemon at random from the Pokedex" << endl;
    Sleep(700);
    cout << "- The player will select a Pokemon to attack the computer's selected Pokemon" << endl;
    Sleep(700);
    cout << "- The selected Pokemon will battle in the Arena until one Pokemon has no health" << endl;
    Sleep(700);
    cout << "- After a Pokemon has 0 health, both Pokemons are returned to their owners and new Pokemon must be selected to battle once again" << endl;
    Sleep(700);
    cout << "- Every Pokemon has a different attack and health points, so choose wisely!" << endl;
    Sleep(700);
    cout << "- The game is finished when either the player or the computer have 0 health on all 4 Pokemon, and the winner is who does not have 0 health on their Pokemon" << endl;
    system("pause"); // "Enter any key to continue...", when the user is ready (appears to be Windows only)
    }

    // main game code
    cout << "New game started!" << endl;
    Sleep(300);
    Player thePlayer; // default object for player
    thePlayer.setName(); // sets the player's name
    thePlayer.addPokemons(); // gives the player 4 Pokemons at random
    Sleep(300);
    cout << "Hello, " << thePlayer.getName() << ", your Pokemon are: " << endl;
    thePlayer.returnPokemons();
    std::cout << " ------" << endl;
    Computer comp; // default object for computer
    comp.addPokemons(); // gives the computer 4 Pokemons at random
    Sleep(300);
    cout << "The computer's Pokemon are: " << endl;
    comp.returnPokemons();
    return 0;
}