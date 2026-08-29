#include<iostream>
using namespace std;

int main(){
    double value,solution;
    char input;
    string userinput;
    cout << "it's a temperature converter!" << endl;
    cout << "Click y to continue or q to quit: " << endl;
    cin >> input;
    while(input == 'y'){
        cout << "type f for fahrenheit to celsius, type c for celsius to fahrenheit, type k for kelvin to celsius, type kf for kelvin to fahrenheit, type ck for celsius to kelvin, type fk for fahrenheit to kelvin: " << endl;
        cin >> userinput;
        if(!(userinput == "f" || userinput == "c" || userinput == "k" || userinput == "kf" || userinput == "ck" || userinput == "fk")) {
            cout << "Invalid input!" << endl;
        }
        else{
            cout << "Input Value: ";
            cin >> value;
            if(userinput == "c"){
                solution = (value*1.8)+32;
                cout << solution << " fahrenheit" << endl;
            }
            else if(userinput == "f"){
                solution = (value-32)/1.8;
                cout << solution << " celsius" << endl;
            }
            else if(userinput == "k"){
                solution = value - 273.15;
                cout << solution << " celsius" << endl;
            }
            else if(userinput == "kf"){
                solution = (1.8*value) - 459.67;
                cout << solution << "fahrenheit" << endl;
            }
            else if(userinput == "ck"){
                solution = value + 273.15;
                cout << solution << " Kelvin" << endl;
            }
            else if(userinput == "fk"){
                solution = (value - 32)/1.8 + 273.15;
                cout << solution << " Kelvin" << endl;
            }
            else{
                cout << "Invalid input!" << endl;
            }
        }
        cout << "Click y to continue or q to quit: " << endl;
        cin >> input;
    }
}