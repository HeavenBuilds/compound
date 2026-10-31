#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    char tempType;
    double temp, fahrenheit, celsius;


    cout << "Enter the temperature to be converted : "; 
    cin >> temp;

    cout << "Enter a f if the temperature is in Fahrenheit";
    cout << "\n or a c if the temperature is in Celsius : ";
    cin >> tempType;

    cout << setiosflags(ios::fixed) 
         << setiosflags(ios::showpoint)
    << setprecision(2);


    if (tempType == 'f' || tempType == 'F') {
        celsius = (temp - 32) * 5 / 9;
        cout << "The temperature in Celsius is : " << celsius << endl;
    } 
    else if (tempType == 'c' || tempType == 'C') {
        fahrenheit = temp * 9 / 5 + 32;
        cout << "The temperature in Fahrenheit is : " << fahrenheit << endl;
    } 
    else {
        cout << "Invalid temperature type entered." << endl;
    }
    return 0;
}