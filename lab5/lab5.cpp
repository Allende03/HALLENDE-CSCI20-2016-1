# include <iostream>
using namespace std;

struct Monster { 

string head = "Zombus";  // remove the word monster to get rid off error message
string eyes = "Spritem";  
string ears = "Vegitas";
string nose = "None";
string mouth = " Wackus ";
};

int main () {
Monster Ugly;
cout << " name Ugly"<<endl;
cout << " head " << Ugly.head << endl;
cout << " eyes " << Ugly.eyes << endl;
cout << " ears " << Ugly.ears << endl;
cout << " nose " << Ugly.nose << endl;
cout << " mouth " << Ugly.mouth << endl;

 return 0;
}





