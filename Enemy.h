#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include "Character.h"
class Enemy : public Char {
    public:
    Enemy(std::string n);
    virtual int GetDamage()=0;
    virtual void Fatality(std::string Heroname)=0;
    virtual void Attack()=0;
    virtual void inspect()=0;
    virtual void Finished(std::string hero)=0;

};

class Leech : public Enemy {
    private:
    int Damage;
    
    public:
    bool spawn();
    
    Leech(int dmg=20);
    void show();
    void appear();
    void Attack();
    int GetDamage();

    void inspect();

    void Finished(std::string hero);
    
    void Fatality(std::string hero);
};


class Gorak: public Enemy {
    private:
    int Damage;
    public:
    bool spawn();
    
    Gorak(int dmg=50);
    void show();
    void appear();
    void Attack();
    int GetDamage();
    void inspect();
    void Fatality(std::string hero);
    void Finished(std::string hero);
};



#endif