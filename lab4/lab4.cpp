// Hugo Allende made it 9-02-2016 
//2nd edition 9-8-2016
//3rd edition 9-13-2016

# include <iostream>
using namespace std;
 
/* computing coin machine */
 
int main() {  
    
    //variable are declared here
    
int numQuarter = 0;
int numDime = 0;
int numNickel = 0;
int numPennies = 0;

int coinValue =0; 
int amountRecieved =0;
int coinToDimes;
int coinToNickels;
int coinToPennies;
double fees = .109; // the fees for using the machine is 10.9%
// all delcaration goes before this line.
double amountForCustomer = 0;
double finalfees = 0;

cout << "enter whole dollar amount" << endl;
cin >> amountRecieved; 
coinValue = amountRecieved;

numQuarter = coinValue/25;
 
coinToNickels = (coinValue%25)/10;

coinToPennies = (coinValue%5)/5; //just fallow parten of previus line

coinToPennies = (coinValue%1)/1;

//fees for using the machine
cout <<"amount at the beggining" << amount Recieved; 
cout << numQuarter << "dimeValue" << endl;

}