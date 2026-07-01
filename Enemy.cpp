#include "Enemy.h"
#include <iostream>
Enemy::Enemy(std::string n) : Char(n)
{
    std::cout<<"Enemy spawned\n";
}


Leech::Leech(int dmg):Enemy("Grave Leech"),Damage(dmg)
{
    SetHealth(50);
}

bool Leech::spawn()
{
    int chance = rand() % 100 + 1; // 1-100
    return chance <= 20;
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

void Leech::inspect()
{
    std::cout<<"\n==========GRAVE LEECH==========\n\n";

std::cout<<"Classification: Carrion Parasite\n\n";

std::cout<<"Threat Level: Low\n\n";

std::cout<<"The Grave Leech is a nocturnal scavenger commonly found in damp forests, burial grounds, and abandoned campsites. Unlike ordinary leeches, it possesses hardened claws capable of tearing through loose soil and rotting flesh.\n\n";

std::cout<<"Travelers often mistake the sounds of a Grave Leech for an animal digging beneath the earth. By the time the noise is recognized, the creature is usually much closer than expected.\n\n";

std::cout<<"Many scholars believe the species feeds not only on flesh, but on the lingering warmth of the dead.\n\n";

std::cout<<"Hunters are advised to avoid recently disturbed graves. Where one Grave Leech emerges, others are rarely far behind.\n\n";

}





