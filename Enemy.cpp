#include "Enemy.h"
#include <iostream>
Enemy::Enemy(std::string n) : Char(n)
{
    std::cout<<"Enemy spawned\n";
}





Leech::Leech(int dmg):Enemy("Grave Leech"),Damage(dmg)
{}

bool Leech::spawn()
{
    return rand() % 4 == 0;
}

void Leech::show()
{
    std::cout<<"Creature Details\n";
    std::cout<<"Name: "<<GetName()<<std::endl;
    std::cout<<"Health: "<<GetHealth()<<std::endl;
}

void Leech::Attack()
{
    std::cout<<"Leech attacks with claws!! "<<std::endl;
}

void Leech::appear()
{
    std::cout<<"The soil splits apart.\n"<< "A Grave Leech drags itself into the moonlight."<<std::endl;
        
}

int Leech::GetDamage()
{
    return Damage;
}

void Leech::Fatality(std::string hero)
{
    std::cout<<hero<<" tears open the mouth of Leech BRUTALLY\n";
}