#include <iostream>
#include "Character.h"
#include <string>
Char::Char(std::string n){
    Name=n;
}

std::string Char::GetName(){
    return Name;
}

int Char::GetHealth(){
    return Health;
} 

void Char::SetHealth(int h){
    if (h<0)
    {
        Health=0;
    }
    
    else 
    {
        Health=h;
    }
}

void Char::show(){
        std::cout<<"\n";
        std::cout<<"Character Name: "<<Name<<std::endl;
        std::cout<<"Health: "<<Health<<std::endl;
}


void Char::TakeDamage(int dmg){
    SetHealth(GetHealth() - dmg);
}

