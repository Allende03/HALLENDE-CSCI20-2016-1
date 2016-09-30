// Hugo Allende ATM Machine 9/30 2016
#include <iostream>
using namespace std;


class AtmMachine {
public:
AtmMachine(){
    balance=0;
}

AtmMachine(double user){ // constructor
    balance=user;
}

void withraw(double takingOut){ //setting the withraw function to either aprove it or disaprove if the ammount of $$ is <= to the withraw.
    if (takingOut<=balance) {
        balance-=takingOut;
        cout<< "withraw succesfull balance: $"<< Getbalance() <<endl;
    }
    else
        cout<< "withraw fail "<< endl;
}

//accesor or getter
void Setbalance(double Money){ //this is just setting the balance.
    balance=Money;
}


double Getbalance(){ // this is a function
    return balance; // this a variable
    }

void deposit(double dollars){
    balance+=dollars;
    cout<< "deposit succesfull :$"<<Getbalance()<< endl;
}
void printstatement(){
    cout <<"your current balance is $" << balance << endl;

}

//private
private:
double balance;

};


int main(){
    AtmMachine Hugo;

    Hugo.deposit(100);
    Hugo.withraw(20);
    Hugo.printstatement();
    Hugo.withraw(60);
    Hugo.withraw(40);
    Hugo.printstatement();
    Hugo.deposit(73);
    Hugo.withraw(40);




    return 0;


}