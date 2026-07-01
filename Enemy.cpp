#include "Enemy.h"
#include <iostream>
Enemy::Enemy(std::string n) : Char(n)
{}


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
    std::cout<<"\n========== GRAVE LEECH ==========\n\n";

std::cout<<"Classification: Carrion Parasite\n\n";

std::cout<<"Threat Level: Low\n\n";

std::cout<<"The Grave Leech is a nocturnal scavenger commonly found in damp forests, burial grounds, and abandoned campsites. Unlike ordinary leeches, it possesses hardened claws capable of tearing through loose soil and rotting flesh.\n\n";

std::cout<<"Travelers often mistake the sounds of a Grave Leech for an animal digging beneath the earth. By the time the noise is recognized, the creature is usually much closer than expected.\n\n";

std::cout<<"Many scholars believe the species feeds not only on flesh, but on the lingering warmth of the dead.\n\n";

std::cout<<"Hunters are advised to avoid recently disturbed graves. Where one Grave Leech emerges, others are rarely far behind.\n\n";

}

void Leech::Finished(std::string hero)
{
        std::cout<<"Leech gobbles up the bones of "<<hero<<" alive..!\n";
        std::cout<<hero<<" was devoured by Grave Leech"<<std::endl;
        std::cout<<hero<<" was killed by Grave Leech!"<<std::endl;
        std::cout<<"GAME OVER..."<<std::endl;
        std::cout << "\n=========================================\n\n";
}






Gorak::Gorak(int dmg):Enemy("Gorak"),Damage(dmg)
{
    SetHealth(150);
}

bool Gorak::spawn()
{
    int chance = rand() % 100 + 1; // 1-100
    return chance <= 10;
}

void Gorak::appear()
{
    std::cout<<"A towering Gorak emerges from the fog, its tusks scraping against exposed nerves.\n";
    std::cout<<"It stares down with its six eyes- which never sleeps\n";
}

void Gorak::show()
{
    std::cout<<"Creature Details\n";
    std::cout<<"Name: "<<GetName()<<std::endl;
    std::cout<<"Health: "<<GetHealth()<<std::endl;
}

void Gorak::Attack()
{
    std::cout<<"The Gorak crashes into with terrifying force through its lower tusks! "<<std::endl;
}
int Gorak::GetDamage()
{
    return Damage;
}


void Gorak::Fatality(std::string hero)
{
    std::cout<<hero<<" burst down six eyes while nerves of Gorak starts to leak blood on the ground.\n";
}


void Gorak::inspect(){
std::cout<<"\n========== GORAK ==========\n\n";

std::cout<<"Classification: Livestock Beast\n\n";

std::cout<<"Threat Level: Moderate\n\n";

std::cout<<"Habitat: Farms, Grasslands, Forest Borders\n\n";

std::cout<<"The Gorak is a massive horned beast raised throughout the northern territories for meat, milk, and labor. Adult specimens stand nearly twice the height of an ordinary ox and possess enough strength to pull entire timber wagons through mud and snow.\n\n'";

std::cout<<"A mature Gorak possesses six eyes arranged in pairs across its elongated skull. While all six remain functional, herders claim the animal can perceive movement from nearly every direction. Two enormous ivory tusks protrude from its lower jaw, curving upward past the cheeks like pale sickles.\n\n";

std::cout<<"The creature's hide is unusually thin around the neck and shoulders, exposing dark cords of tissue that pulse visibly beneath the skin. These exposed nerves appear to cause no discomfort to the animal.\n\n";

std::cout<<"Most Goraks are calm and obedient. They graze in silence, respond to familiar handlers, and rarely display aggression.\n\n";

std::cout<<"When threatened, a Gorak enters a violent frenzy. A charging adult can shatter wooden barricades, overturn wagons, and impale predators upon its tusks.\n\n";

}

void Gorak::Finished(std::string hero)
{
    std::cout<<"Gorak crushes "<<hero<<" beneath its weight before disappearing into the fog.\n";
    std::cout<<hero<<" was killed by Gorak!"<<std::endl;
    std::cout<<"GAME OVER..."<<std::endl;
    std::cout << "\n=========================================\n\n";
}