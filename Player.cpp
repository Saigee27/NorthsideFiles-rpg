#include <iostream>
#include "Player.h"
Player::Player(std::string n, int str):Char(n),Strength(str) {}
void Player::Attack()
{std::cout<<GetName()<<" bursts bullets through AK47 rifle!! "<<std::endl; 
 std::cout<<"Strength: "<<Strength<<std::endl;}

int Player::GetStrength(){
    return Strength;
}

