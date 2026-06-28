#include <iostream>
#include "Story.h"
#include <iostream>

void ContinueStory()
{
    std::cout << "\nPRESS ENTER TO CONTINUE";
    std::cin.get();
}


void Prologue(Player & hero){
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
}

void VillageConvo(Player & hero)
{
    int firstChoice;

    std::cout << "\nWhat will you do?\n\n";
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
        ContinueStory();

        std::cout << "\n\nThe villager looked away.\n";
        std::cout << "\"Your wife survived.\"\n\n";

        std::cout << "Relief flooded through him.\n";
        std::cout << "Only for a moment.\n\n";
        ContinueStory();

        std::cout << "\n\"And my daughter?\"\n\n";
        ContinueStory();

        std::cout << "\nThe villager remained silent.\n";
        std::cout << "\"She wasn't found.\"\n\n";
        ContinueStory();
        std::cout<<"\n";
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

    ContinueStory();

    std::cout << "\n\n\"Meera!\"\n";
    std::cout << "\n\"Anya!\"\n\n";
    ContinueStory();
    std::cout << "\nOnly silence answered.\n\n";
    ContinueStory();
    std::cout << "\nVillagers stopped and stared.\n";
    std::cout << "An old man approached.\n\n";
    ContinueStory();
    std::cout << "\"\nYour wife is safe,\" he said.\n\n";
    ContinueStory();
    std::cout<<"\n";

    std::cout << hero.GetName() << " grabbed his shoulder.\n";
    std::cout << "\"My daughter. Where is she?\"\n\n";
    ContinueStory();
    std::cout << "\nThe elder's face darkened.\n";
    std::cout << "\"Come with me.\"\n";
    std::cout << "=========================================\n";
    break;
}
    default:{
    {std::cout<<"Invalid request..!!"<<std::endl;}
    break;
    }
    }

}