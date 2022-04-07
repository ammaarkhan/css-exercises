#include <iostream>
#include <cmath>
using namespace std;

double tempconvertor (double, double&);

int main() 
{
    double cel(0), kel(0), far(0);
    cout << "Enter temp in kelvin:" << endl; 
    cin >> kel;
    cel = kel;
    far = kel;
    far = tempconvertor(far, cel);
    cout << "The Temperature " << kel << " in Kelvin is \n" << cel << " in Celsius and\n" <<
    far << " in Fahrenheit" << endl;
    return 0; 
}

double tempconvertor (double far, double& cel)
{
    if (cel >= 0){
        cel = cel - 273.15;
        far = ((far) * (9.0/5.0)) - 459.67;
    }
    else {
        cel = -1000;
        far = -1000;
    }
    return far;
}