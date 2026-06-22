#include <iostream>

void showbalance(double balance);
double deposit();
double withdraw(double balance);
char y='$';

int main(){
    int choice=0;
    double balance=5000;

    do
    {
        
        std::cout<<"\n";
        std::cout<<"\n";
        std::cout<<"\n";
        std::cout << "\n====== BANK SYSTEM ======\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Quit\n";
        std::cout << "=========================\n";

        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.clear();
        std::cin.ignore(1000,'\n');
        switch (choice)
        {
        case 1:
            showbalance(balance);
            break;


        case 2:{
            double dep;
            dep = deposit();
            if(dep>0){
                balance = balance + dep;
                showbalance(balance);
            }
            
            break;
        }
        
        case 3:{
            double with;
            with=withdraw(balance);
            if(with<=balance && with>0){
                balance = balance - with;
                showbalance(balance);
            

            }
            break;
        }

        case 4:
            std::cout<<"\n";
            std::cout<<"Thankyou for visiting our Bank\n";
            std::cout<<"PLEASE COME SOOON..!\n";   
            std::cout<<"\n";
            std::cout<<"\n"; 
            break;
        
        default: std::cout<<"Invalid request..!\n";
            
            break;
        }

    } while (choice!=4);
    

    return 0;
}

void showbalance(double balance){
    std::cout<<"Your Total Amount remaining is: "<<balance;
}



double deposit(){
    double amount;
    std::cout<<"Enter your amount: ";
    std::cin>>amount;
    if(amount<=0){
        std::cout<<"Insufficient Value..!!\n";
        return 0;

    }
    else{
        std::cout<<"Your amount to be deposited: "<<amount<<std::endl;
        return amount;
    }
}


double withdraw(double balance){
    double amount;
    std::cout<<"Enter your amount: ";
    std::cin>>amount;
    if(amount>balance){
        std::cout<<"Low balance remaining in the account: "<<balance<<std::endl;
        std::cout<<"We are down with: "<<amount-balance<<" less."<<std::endl;
        std::cout<<"Hence, requested cannot be fulfilled..\n";
        return 0;

    }
    else if(amount<=0){
        std::cout<<"Insufficient value\n";
        return 0;

    }
    else{
        std::cout<<"Your amount to be withdrawn: "<<amount<<std::endl;
        return amount;
    }
}