// HUGO ALLENDE 11-11-2016
//LAB 14 Debugging

#include <iostream>
using namespace std;

int main(){

double a, m, r; // Input amount, payment,
int y, I;  //interest rate, and number of years
cout << "Enter the amount borrowed: ";
cin >> a;
//cout<<a;
cout << "Enter the monthly payment you'll make: ";
cin >> m;
//cout<<m;
cout << "Enter the annual interest rate: ";
cin >> r;
r = r/100;// convert interest rate from percent to fraction -interest rate was not being converted to fraction because the formula was misplaced.-
//cout<<r;
cout << "Enter the number of years you want to simulate: ";
cin >> y;
//cout<<y;

for(int i = 0; i < y*12; i++) //iterate through each month ** this part still need to be fix working on it
          {
I = a*(r/3);  // calculate additional interest

a = a + I - m;  }   // add interest and subtract payment from balance
  cout << "At the end of " << y << " years you owe " << a << " dollars" << endl;
  return 0;}
  // git add lab     git commit -a -m 'Lab14 submission'
