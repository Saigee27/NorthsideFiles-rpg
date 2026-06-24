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

virtual void show(){
    std::cout<<"\n";
    std::cout<<"Character Name: "<<Name<<std::endl;
    std::cout<<"Health: "<<Health<<std::endl;
}

void TakeDamage(int dmg){
    SetHealth(GetHealth() - dmg); 
}

};

void DaySurvived();
void MobKilling();

class Warrior : public Char {
    private:
    int Strength;
    public:
    Warrior(std::string n) : Char(n){
        
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



class Enemy : public Char {
    public:
    Enemy(std::string n):Char(n)
    {
        std::cout<<"Enemy spawned!\n";
    }
    virtual int GetDamage()=0;
    virtual void Attack()=0;
    virtual void Fatality(std::string HeroName)=0;
};


class Leech : public Enemy {
    private:
    int Damage;
    public: 
    Leech():Enemy("Grave Leech"){
        Damage=20;
    }
        void show(){
            std::cout<<"Creature Details\n";
            std::cout<<"Name: "<<GetName()<<std::endl;
            std::cout<<"Health: "<<GetHealth()<<std::endl;
        }
        void appear(){
            std::cout<<"A flesh-eating Grave Leech appeared in through the dark!"<<std::endl;
        }
        void Attack(){
            std::cout<<"Leech attacks with claws!! "<<std::endl;
        }

        int GetDamage(){
            return Damage;
        }

        void Fatality(std::string hero){
            std::cout<<hero<<" tears open the mouth of Leech BUTALLY\n";
        }
    };


int date=1;

void DaySurvived(){
    std::cout<<"Days survived: "<<date<<std::endl;
}

int MobCount=0;

void Battle(Warrior & hero, Enemy & enemy){
    int b;
    while(hero.GetHealth()>0 && enemy.GetHealth()>0){
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
        std::cout<<"Hero Health: "<<hero.GetHealth()<<std::endl;
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
        std::cout << "\n=========================================\n";
        std::cout<<"Player History: \n";
        hero.show();
        MobKilling();
        DaySurvived();
        std::cout << "\n=========================================\n";
    }
    
}


void MobKilling(){
    std::cout<<"Monsters finished: "<<MobCount<<std::endl;
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
    std::cout<<"\n";
    std::cout<<"\nThe rain had not stopped for hours.\n\n";

    std::cout<<"Major "<<hero.GetName()<<" drove the narrow mountain road, wife beside him, daughter asleep behind. Rain hammered the windshield, blurring everything into menacing shapes. Ancient forest pressed too close, trees like silent watchers that had claimed the land long ago. The map lied about a nearby town—nothing matched. No lights pierced the storm. Only the engine, rain, and wet tires on stone.\n\n";
    ContinueStory();
    std::cout<<"\nThe rain hammered harder as the headlights stuttered again.  \n\n";



    ContinueStory();
    std::cout<<"\nSarah's voice reached him in fragments, cut off by impact and distance that did not make sense inside the cabin. A movement in the back seat. A shape shifting in darkness. The inside of the jeep was no longer inside anything. Light came in broken flashes through twisted metal, revealing hands that did not hold onto anything and seats that no longer stayed where they were supposed to be.\n\n";
    ContinueStory();
    std::cout<<"\n\nThen, suddenly, there was stillness.\n";
    std::cout<<"Not peace.\n";
    std::cout<<"Just absence of motion.\n\n";
    ContinueStory();

    int firstChoice;

    std::cout << "\nWhat will you do?\n";
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
std::cout<<"Welcome in Northside."<<std::endl;
std::cout<<"The gates of Northside creak open.\n";
std::cout<<"Villagers move cautiously through muddy streets.\n";
std::cout<<"The smell of wood smoke fills the cold air.\n";
std::cout<<"\n";
std::cout << "=========================================\n\n";

    while(hero.GetHealth()>0){
        std::cout<<"\nDAY: "<<date<<std::endl;
        std::cout<<"\nWhere will you go now?"<<std::endl;
        std::cout<<"\n";
        std::cout<<"1. Explore forest area near alley.."<<std::endl;
        std::cout<<"\n";
        std::cout<<"2. Rest at the campside.."<<std::endl;
        std::cout<<"\n";
        std::cout<<"3. Check Stats"<<std::endl;
        std::cout<<"\n";
        std::cout<<"choose one option: ";
        std::cin>>p;

        switch (p)
        {
        case 1:
        {
            std::cout<<"\n";
            std::cout<<hero.GetName()<<" roams around the valley.\n";
            std::cout<<"\n";
            int encounter = rand() % 4;
            if(encounter==0){
                Leech leech;
                std::cout<<"\n";
                leech.appear();
                std::cout<<"\n";
                leech.show();
                std::cout<<"\n";

                Battle(hero,leech);
                

            }

            else{

                std::cout<<"\n";
                std::cout << "=========================================\n\n";
                std::cout<<"THE FOREST AREA IS SAFE AND PEACEFUL RIGHTNOW."<<std::endl;
                std::cout << "\n=========================================\n\n";
                
                
            }
            break;
        }

        case 2:
        {
            std::cout<<"\n";
            std::cout<<hero.GetName()<<" rest in the village.\n";
            hero.SetHealth(100);
            date++;
            std::cout<<"\nNew day begins with Hope.\n";
            
            std::cout<<"\n";
            std::cout<<hero.GetName()<<" feeling good with "<<hero.GetHealth()<<" health\n\n";
            std::cout << "=========================================\n\n";
            break;
            
        }

        case 3:
        {
            std::cout << "\n=========================================\n\n";
            hero.show();
            MobKilling();
            DaySurvived();
            std::cout << "\n\n=========================================\n\n";
            break;
        }
        default:
        {
            std::cout<<"Invalid request";
            break;
        }
        break;
        }

    }
    return 0;
}