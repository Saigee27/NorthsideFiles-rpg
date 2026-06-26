#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Character.h"
class Player : public Char{
    private:
    int Strength;
    public:
    Player(std::string n, int str=30);
    int GetStrength();
    void Attack();
};
#endif