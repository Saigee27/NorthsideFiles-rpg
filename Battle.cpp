#include "Battle.h"

#include <iostream>

int MobCount=0;

void MobKilling(){
    std::cout<<"Monsters finished: "<<MobCount<<std::endl;
}


void Battle(Player & hero, Enemy & enemy){
    int b;
    while(hero.GetHealth()>0 && enemy.GetHealth()>0){
        std::cout<<"\n";
        std::cout<<"......................."<<std::endl;
        std::cout<<"1. ATTACK ENEMY"<<std::endl;
        std::cout<<"2. SHOW STATS"<<std::endl;
        std::cout<<"3. CHECK BLACK ARCHIVE"<<std::endl;
        std::cout<<"4. EXIT"<<std::endl;
        std::cout<<"\n";
        std::cout<<"Choose one option: ";
        std::cin>>b;
        std::cout<<"\n";

    switch(b){
        case 1:{
        hero.Attack();
        enemy.TakeDamage(hero.GetStrength());
        std::cout<< enemy.GetName()<<" Health: "<<enemy.GetHealth()<<std::endl;
        std::cout<<"\n";

        if(enemy.GetHealth()<=0)
        {enemy.Fatality(hero.GetName());
        std::cout<<enemy.GetName()<<" is defeated!"<<std::endl;
        std::cout<<"\nBattle Won Successfully!"<<std::endl;
        std::cout << "\n=========================================\n";
        MobCount++;
        break;
        }

        enemy.Attack();
        hero.TakeDamage(enemy.GetDamage());
        std::cout<<hero.GetName()<<" Health: "<<hero.GetHealth()<<std::endl;
        std::cout<<"\n";
        break;
        }

        case 2:{
            hero.show();
            std::cout<<"\n";
            enemy.show();
            break;
        }

        case 3:
        {
            enemy.inspect();
            break;
        }

        case 4:
        {
        std::cout<<hero.GetName()<<" ran from the ground!!"<<std::endl;
        std::cout<<"\n";
        return;
        }
        
        default:{
            std::cout<<"Wrong move!!"<<std::endl;
            break;
        }

    }
    }
    if(hero.GetHealth()<=0){
        std::cout<<enemy.GetName()<<" gobbles up the bones of "<<hero.GetName()<<" alive..!\n";
        std::cout<<hero.GetName()<<" was devoured by "<<enemy.GetName()<<std::endl;
        std::cout<<hero.GetName()<<" was killed by "<<enemy.GetName()<<"!"<<std::endl;
        std::cout<<"GAME OVER..."<<std::endl;
        std::cout << "\n=========================================\n\n";
        std::cout<<"Player History: \n";
        hero.show();
        MobKilling();
        DaySurvived();
        std::cout << "\n=========================================\n";
    }
    
}
