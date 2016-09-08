// Hugo Allende made 9-02-2016
// revise 9-08-2016
# include <iostream>
using namespace std;
 
/* computing coin machine */
 
int main() {  
    
    //variable are declared here
    
int numQuater = 0;
int numDime = 0;
int numNickel = 0;
int numPennies = 0;

int quaterValue = 25;
int dimeValue = 10;
int nickelValue = 5;
int penniesValue = 1;

int coinValue =0; 
int amountRecieved =0;
int coinToDimes;
int coinToNickels;

double fees = .109; // the fees for using the machine is 10.9%
// all delcaration goes before this line.
double amountForCustomer = 0;
double finalfees = 0;

cout << "enter whole dollar amount" << endl;
cin >> amountRecieved; 
coinValue = amountRecieved;

coinToDimes = coinValue % quaterValue;
 
coinToNickels = coinToDimes % dimeValue;

coinTopennies = //just fallow parten of previus line


cout<< coinToNickels; //This part is just to run a test.

}