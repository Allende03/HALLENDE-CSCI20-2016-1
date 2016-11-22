#include <iostream>
#include <cstring>
using namespace std;

int main()
    {

char firststr[10];                                // defiena an arrays size
int firstname = 0;                                // variable is set
char *head = firststr;
char *tail = firststr;

cout << "Please enter a 10 letter word or less" << endl;   //ouput step for the user to fallow
cin >> firststr;                                           // store user input

strlen(firststr);

firstname = strlen(firststr);

cout << "Your word is " << firststr << endl;
if (firstname<10)  {

    while (*head != '\0')
        {
        cout << *head;    head++;
        }
        }

    else  {

        cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;  } // cout warniing if word entere is longer than 10 charactrist
     cout << endl;  tail = &firststr[strlen(firststr) - 1];

    if (firstname < 10)  {

    while (*tail>0)
    {
        cout << *tail;
        tail--;  }
  }
  cout << endl;
  head = firststr;
  tail = &firststr[strlen(firststr) - 1];
  head++;  tail--;  if (*head == *tail)  {

      cout << "It is an palindrome!" << endl; // cout phrase "It is not an palindrome"
      }

      else
      {   cout << "It is not an palindrome" << endl;  }  //cout phrase "It is not an palindrome"

 return 0; }