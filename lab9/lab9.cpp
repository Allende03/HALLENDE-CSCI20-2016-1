// Hugo Allende, 9/27/2016 Degree Convertion
//Using class and function

#include <iostream>
 using namespace std;


class TemperatureConverter{
 private:
 double kelvin_;  // this is the variable

public:
TemperatureConverter()
{
 kelvin_=0;
 }
TemperatureConverter(double k_)    //this is the overload   // kelvin_= K_ to whatever (double k_) value is assigned.
{
 kelvin_=k_;
 }

void SetTempFromKelvin(double k_) //thise set temp gets value from kelving in the private
{
  kelvin_=k_;
}
double GetTempFromKelvin()
{
 return kelvin_;
}

void SetTempFromCelsius(double Ce)  // set cellcius temperature  and later converted to kelvin with the function below
{
 kelvin_= (Ce+273.15);
}

double GetTempAsCelsius()     //get temperature from cellsius.
{
return kelvin_ - 273.15;
}

void SetTempFromFahrenheit(double Fah)  // set fahrenheit and later converted to to kelvin.
{
 kelvin_= (5*(Fah-32)/9);
}

double GetTempAsFahrenheit() {  // this part is causing an error
 return kelvin_ = (5*(-32)/9)+ 273.15;
}

double PrintTemperatures()
{

}

};




