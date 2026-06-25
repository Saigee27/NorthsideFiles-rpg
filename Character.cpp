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
    else if(h>100)
    {
        Health=100;
    }
    else 
    {
        Health=h;
    }



}