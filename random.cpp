#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    int tries=0;
    int num;
    int guess=0;
    std::cout<<"Guessssing game startsss..!!"<<std::endl;

    num=rand()%100+1;
    
    std::cout<<"Guess a number: ";
    do{
        
        std::cin>>guess;
        tries++;
        if(guess>num){std::cout<<"Your number is to high..!"<<std::endl;}
        else if(guess<num){std::cout<<"Your number is to low..!"<<std::endl;}
        else{std::cout<<"Congratulations..! you found the number...."<<std::endl;}
        
        

    }while(guess!=num);
    return 0;
}
