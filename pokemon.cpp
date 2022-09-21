#include <iostream>
#include <string>
#include "pokemon.h"
using namespace std;

string Pokemon::returnName(){return name;} // returns the Pokemon name
string Pokemon::returnType(){return type;} // returns the Pokemon type
int Pokemon::returnHealth(){return health;} // returns the health amount
int Pokemon::returnAttack(){return attack;} // returns the attack amount