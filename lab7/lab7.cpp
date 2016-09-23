//Hugo Allende 9-19-2016 Song display
//             9-22-2016

#include <iostream>
using namespace std;

//set variable
string animalName = "   ";
string animalSound = "   ";


string animalName1 = " cow ";
string animalName2 = " pig   ";
string animalName3 = "duck";
string animalName4 = " lamb ";


string animalSound1 ="moo ";
string animalSound2 ="oink ";
string animalSound3 =  "quac k";
string animalSound4 = "baa ";

void oldManSong(string& animalName)
       {
cout << "old macdonal had a farm" << endl;
cout <<"E I E I O" << endl;


cout << "And on his farm he had a " << animalName<<endl;
cout <<"E I E I O" << endl;
}

void oldManChorus(string& animalSound )

{

cout << "With a " << animalSound << animalSound << "here" <<endl;
cout << "and a " << animalSound << animalSound << "there" <<endl;
cout << "here a, " << animalSound << "there a " << animalSound <<endl;
cout << "Everywhere a " << animalSound << animalSound <<endl;
cout << "Old MacDonald had a farm "  <<endl;
cout << "E I E I O" << endl<< endl;

}

int main() {
oldManSong(animalName1);
oldManChorus(animalSound1);

oldManSong(animalName2);
oldManChorus(animalSound2);

oldManSong(animalName3);
oldManChorus(animalSound3);

oldManSong(animalName4);
oldManChorus(animalSound4);


return 0; }



