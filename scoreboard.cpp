#include<iostream>
#include<string>
#include<stdlib.h>
#include<Windows.h>
#include "pokemon.h"
#include "player.h"
#include "computer.h"
#include "battle.h"
#include "scoreboard.h"
using namespace std;

void Scoreboard::lossCount(Player a){
    for(int i=0; i<4; i++){
        if (a.playerArray[i].health == 0){
            playerLoss++;
        }
    }
}; // incremental loss counter for player's Pokemon

void Scoreboard::lossCount(Computer b){
    for(int i=0; i<4; i++){
        if (b.computerArray[i].health == 0){
            computerLoss++;
        }
    };
}; // incremental loss counter for computer's Pokemon


void Scoreboard::resultOutput(Player a, Computer b){
    if (playerLoss > computerLoss){
        cout << "The winner is: " << endl;
        Sleep(700);
        cout << "Computer!" << endl;
        Sleep(500);
        cout << "Better luck next time! Thank you for playing!" << endl;
    }
    else if (computerLoss > playerLoss){
        cout << "The winner is: " << endl;
        Sleep(700);
        cout << a.getName() << "!" << endl;
        Sleep(500);
        cout << "Congratulations! Thank you for playing!" << endl;
    }
    else if (computerLoss == playerLoss){
        cout << "There is a tie!" << endl;
        Sleep(300);
        cout << "No one wins, better luck next time! Thank you for playing!" << endl;
        Sleep(500);
    }
};  // displays the winner of the battle