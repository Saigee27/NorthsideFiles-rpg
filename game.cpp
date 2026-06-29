#include <iostream>
#include <ctime>
#include "Character.h"
#include "Player.h"
#include "Enemy.h"
#include "Story.h"
#include "Battle.h"
int main(){
    srand(time(0));
    std::string n;
    std::cout<<"Enter Your Character Name: ";
    std::getline(std::cin,n);
    Player hero(n);
    hero.show();
    std::cout<<"\n";
    int p;

    Prologue(hero);

    VillageConvo(hero);

    NorthSide(hero);

    return 0;
}