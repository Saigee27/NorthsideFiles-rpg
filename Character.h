#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>
class Char{
    private:
    std::string Name;
    int Health=100;
    public:
    Char(std::string n);
    std::string GetName();
    int GetHealth();
    void SetHealth(int h);
    virtual void show();
    void TakeDamage(int dmg);
    
};
#endif