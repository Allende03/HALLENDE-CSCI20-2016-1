# include <iostream>
using namespace std;

// this mean take kilos and return to pounds
float ToPounds (float kilos)    //  this function is declare withing the scope and pounds is inly seen by this function.
{
    return kilos/ .453592;
}
//  this function take pounds and return kilos
float ToKilos (float pounds)  // kilos is only seen by this fucntion.
{
    return pounds*.453592;


}
main()
{
    cout <<" Enter Kilograms amount " << endl;
    float UserInput;
    cin >> UserInput;  //this function takes user imput and storage it.
    cout << " you entered " << UserInput << " kilos " << endl
         << "which is equivalent to " <<  ToPounds(UserInput) << " pounds " << endl;  // toPounds take user input and converted to pounds

    cout <<" enter pound amount ";

    cin >> UserInput;  //this function takes user imput and storage it.
    cout << ToKilos(UserInput);

    cout << " you entered " << UserInput << " lbs " << endl
         << "which is equivalent to " <<  ToKilos(UserInput) << " kilos " << endl;

}
