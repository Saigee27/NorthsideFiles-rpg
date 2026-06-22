#include <iostream>
class AbstractEmployee {
    virtual void AskForPromotion()=0;
};


class Employee:AbstractEmployee {
private:
    std::string Name;
    std::string Company;
    int Age;

public:
    void Introduce(){
        std::cout<<"Name - "<<Name<<std::endl;
        std::cout<<"Company - "<<Company<<std::endl;
        std::cout<<"Age - "<<Age<<std::endl;

    } 

    void AskForPromotion(){
        if (Age>=30){
            std::cout<<Name<<" got promoted!"<<std::endl;
        }
        else{
            std::cout<<Name<<", sorry NO promotion for you!.."<<std::endl;
        }
    }

    Employee(std::string naam, std::string comp, int umar ){
        Name=naam;
        Company=comp;
        Age=umar;
    }
};


int main(){
    Employee employee1 = Employee ("Tristan","Dell",23);
    Employee employee2 = Employee ("Bellavita","HCL",30);
     
    employee1.Introduce();
    std::cout<<"\n";
    employee1.AskForPromotion();
    std::cout<<"\n";
    employee2.Introduce();
    std::cout<<"\n";
    employee2.AskForPromotion();
    std::cout<<"\n";
    return 0;
}