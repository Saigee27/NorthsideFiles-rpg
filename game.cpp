#include <iostream>
#include <ctime>

class Char{
private:
std::string Name;

int Health=100;
public:
Char(std::string n){
    Name=n;
    
}

std::string GetName(){
    return Name;
}



int GetHealth(){
    return Health;

}

void SetHealth(int h){

if (h<0)
{
    Health=0;    
}
else if (h>100)
{
    Health=100;
}
else
{
    Health=h;
}

}

void show(){
    std::cout<<"\n";
    std::cout<<"Character Name: "<<Name<<std::endl;
   
    std::cout<<"Health: "<<Health<<std::endl;
}

void TakeDamage(int dmg){
    SetHealth(GetHealth() - dmg); 
}

};

class Warrior : public Char {
    private:
    int Strength;
    public:
    Warrior(std::string nu) : Char(nu){
        
        Strength=30;
    }
    void Attack(){
        std::cout<<GetName()<<" bursts bullets through AK47 rifle!! "<<std::endl;
        std::cout<<"Strength: "<<Strength<<std::endl;

    }


int GetStrength(){
    return Strength;
}

};


class Goblin : public Char {
    private:
    int Damage;
    public: 
    Goblin():Char("Leech"){
        Damage=20;
    }

        void appear(){
            std::cout<<"A Flesh eating Leech appeared in through the dark!"<<std::endl;
        }
        void Attack(){
            std::cout<<"Leech attacks with claws!! "<<std::endl;
        }

        int GetDamage(){
            return Damage;
        }
    };





void Battle(Warrior & hero, Goblin & goblin){
    int b;
    while(hero.GetHealth()>0 && goblin.GetHealth()>0){
        std::cout<<"\n";
        std::cout<<"......................."<<std::endl;
        std::cout<<"1. ATTACK ENEMY"<<std::endl;
        std::cout<<"2. SHOW STATS"<<std::endl;
        std::cout<<"3. EXIT"<<std::endl;
        std::cout<<"\n";
        std::cout<<"Choose one option: ";
        std::cin>>b;
        std::cout<<"\n";

    switch(b){
        case 1:{
        hero.Attack();
        std::cout<<"\n";
        goblin.TakeDamage(hero.GetStrength());
        std::cout<<"Leech Health: "<<goblin.GetHealth()<<std::endl;

        if(goblin.GetHealth()<=0)
        {std::cout<<hero.GetName()<<" tears open the face of Leach"<<std::endl;
        std::cout<<"Leech is defeated!"<<std::endl;
        break;
        }

        goblin.Attack();
        hero.TakeDamage(goblin.GetDamage());
        std::cout<<"Hero Health: "<<hero.GetHealth()<<std::endl;
        std::cout<<"\n";
        break;
        }

        case 2:{
            hero.show();
            goblin.show();
            break;
        }

        case 3:
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
        std::cout<<"Leech gobbles up the bones of "<<hero.GetName()<<" alive..!";
        std::cout<<hero.GetName()<<" was devoured by Leech\n";
        std::cout<<hero.GetName()<<" was killed by Leech!"<<std::endl;
        std::cout<<"GAME OVER..."<<std::endl;

    }
    
}


void ContinueStory(){
    std::cout<<"\nPRESS ENTER TO CONTINUE";
    std::cin.get();
}

int main(){
    srand(time(0));
    std::string n;
    std::cout<<"Enter Your Character Name: ";
    std::getline(std::cin,n);
    Warrior hero(n);
    hero.show();
    std::cout<<"\n";
    int p;

    std::cout << "=========================================\n";
    std::cout << "              PROLOGUE\n";
    std::cout << "=========================================\n\n";

    std::cout << "The year is 1987.\n\n";

    ContinueStory();

    std::cout << "Major "<<hero.GetName()<<","<<" a decorated army officer,\n";
    std::cout << "was returning home with his wife and young\n";
    std::cout << "daughter after completing a military assignment\n";
    std::cout << "near the northern border.\n\n";

    std::cout << "Night had fallen.\n";
    std::cout << "Heavy rain crashed against the windshield as\n";
    std::cout << "their jeep crawled through a forgotten mountain road.\n\n";

    std::cout << "The map showed a nearby town.\n";
    std::cout << "The road showed nothing.\n\n";

    std::cout << "Only darkness.\n";
    std::cout << "Only forest.\n";
    std::cout << "Only silence.\n\n";

    std::cout << "Then the engine began to sputter.\n";
    std::cout << "The headlights flickered.\n";
    std::cout << "Once.\n";
    std::cout << "Twice.\n";
    std::cout << "Three times.\n\n";

    std::cout << "And then...\n\n";

    std::cout << "Something moved between the trees.\n";
    std::cout << "A shadow larger than any animal.\n\n";

    std::cout << "Before "<<hero.GetName()<<" could react, an unseen force\n";
    std::cout << "slammed into the jeep.\n\n";

    std::cout << "Metal twisted.\n";
    std::cout << "Glass shattered.\n";
    std::cout << "The vehicle rolled into a ditch.\n\n";

    std::cout << "Everything went black...\n\n";

    ContinueStory();

    int firstChoice;

    std::cout << "What will you do?\n";
    std::cout << "1. Speak to the villager.\n";
    std::cout << "2. Rush outside and search for your family.\n";
    std::cout << "Choose one option: ";
    std::cin >> firstChoice;
    
    switch (firstChoice)
    {
    case 1:
    {
        std::cout << "\n";
        std::cout << hero.GetName() << " forced himself to stay calm.\n\n";

        std::cout << "\"My family... where are they?\"\n\n";

        std::cout << "The villager looked away.\n";
        std::cout << "\"Your wife survived.\"\n\n";

        std::cout << "Relief flooded through him.\n";
        std::cout << "Only for a moment.\n\n";

        std::cout << "\"And my daughter?\"\n\n";

        std::cout << "The villager remained silent.\n";
        std::cout << "\"She wasn't found.\"\n\n";

        std::cout << hero.GetName() << "'s blood ran cold.\n";
        std::cout << "\"What do you mean she wasn't found?\"\n\n";

        std::cout << "\"The elder knows more.\"\n";
        std::cout << "=========================================\n";
        break;
    }
    
        
    case 2:
    {
    std::cout << "\n";
    std::cout << hero.GetName() << " burst through the door.\n";
    std::cout << "Pain shot through his body.\n";
    std::cout << "He ignored it.\n\n";

    std::cout << "\"Meera!\"\n";
    std::cout << "\"Anya!\"\n\n";

    std::cout << "Only silence answered.\n\n";

    std::cout << "Villagers stopped and stared.\n";
    std::cout << "An old man approached.\n\n";

    std::cout << "\"Your wife is safe,\" he said.\n\n";

    std::cout << hero.GetName() << " grabbed his shoulder.\n";
    std::cout << "\"My daughter. Where is she?\"\n\n";

    std::cout << "The elder's face darkened.\n";
    std::cout << "\"Come with me.\"\n";
    std::cout << "=========================================\n";
    break;
}
    default:
    {std::cout<<"Invalid request..!!"<<std::endl;}
    break;
    }


std::cout<<"\n";
std::cout<<"\n";
std::cout<<"Welcome in Northside."<<std::endl;
std::cout<<"The gates of Northside creak open.\n";
std::cout<<"Villagers move cautiously through muddy streets.\n";
std::cout<<"The smell of wood smoke fills the cold air.\n";
std::cout<<"\n";
    while(hero.GetHealth()>0){
        std::cout<<"\nWhere will you go now?"<<std::endl;
        std::cout<<"\n";
        std::cout<<"1. Explore forest area near alley.."<<std::endl;
        std::cout<<"\n";
        std::cout<<"2. Rest at the campside.."<<std::endl;
        std::cout<<"\n";
        std::cout<<"choose one option: ";
        std::cin>>p;

        switch (p)
        {
        case 1:
        {
        
            int encounter = rand() % 4;
            if(encounter==0){
                Goblin goblin;
                std::cout<<"\n";
                goblin.appear();
                std::cout<<"\n";
                goblin.show();
                std::cout<<"\n";

                Battle(hero,goblin);
                std::cout<<"Battle Ended!"<<std::endl;

            }

            else{

                std::cout<<"\n";
                std::cout<<"The forest is peaceful"<<std::endl;
                std::cout<<"\n";
            }
            break;
        }

        case 2:
        {
            std::cout<<"You rest at the campsite.\n";
            return 0;
            
        }

        
        default:
        break;
        }

    }
    return 0;
}