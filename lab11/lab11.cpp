// Income Taxt calculator Hugo Allende Octuber-04-2016
//using if else revised                Octuber-14-2016
//                                     octuber-19-2016

#include <iostream>
using namespace std;

   int Wages = 0;
   int Interest = 0;
   int UnEmployment = 0;
   int Withheld = 0;
   double TaxtRate= 0;
   double single=1;
   double AdjustIncome= 0;
   string EmployName;



int main() {
   cout << "enter employ name ";
      getline( cin, EmployName);


    cout << "enter Wages ";                              //GET THE VALUES ENTERED BY THE USER.
    cin >> Wages;

    cout << "enter Interest ";
    cin >> Interest;

    cout << "UnEmployment ";
    cin >> UnEmployment;

    cout << "enter amount withheld ";
    cin >> Withheld;

cout << "enter marital status single 1, and married 2 ";
cin >> single;

AdjustIncome= Wages+ Interest+UnEmployment;
TaxtRate =single*(3900+6100);

if (AdjustIncome - TaxtRate < 0 ){

TaxtRate=0;

}
else if (single==1 ){
   if (AdjustIncome <= 8925 )
   {
      TaxtRate= AdjustIncome*.10;
   }
   else if (AdjustIncome >= 8926 && AdjustIncome <=36250)
   {
      TaxtRate= 892.5+((AdjustIncome-8925)*.15);

   }
   else if (AdjustIncome >= 36251 && AdjustIncome <=87850)
   {
      TaxtRate = 4991.25+ ((AdjustIncome-36250)*.25);
   }
   else
   {
      TaxtRate =17891.25 + ((AdjustIncome-87850)*.28); // The single income tax calculation end in this line
   }
}

 // married calculation set start below thid line
else {

if (AdjustIncome <=17850){
   TaxtRate = AdjustIncome*.10;
}
else if (AdjustIncome<=72500){
   TaxtRate= 1785+((AdjustIncome-17850)*.15);

}
else {
   TaxtRate= 9982.50+((AdjustIncome-72500)*.28);
}
}

cout <<"Name: " << EmployName <<endl;
cout << "Total Gross Adjusted Income: "<< AdjustIncome <<endl;
cout<< "Total Tax Owed: " << TaxtRate << endl;


if (TaxtRate<=Withheld){

   cout<< "The Amount Owed is: $" << Withheld-TaxtRate;
}
else {
   cout << "you are entitle a refund of: $" << TaxtRate-Withheld;

}


return 0;
}
