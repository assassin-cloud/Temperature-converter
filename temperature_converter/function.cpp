#include<iostream>
using namespace std;

void welcome(){
    cout << "============================" << endl;
    cout << "   Temperature converter    " << endl;
    cout << "============================" << endl;
    cout << endl;
    cout << "1. Celcius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celcius" << endl;
    cout << "3. Kelvin to Celcius" << endl;
    cout << "4. Kelvin to Fahrenheit" << endl;
    cout << "5. Celsius to Kelvin" << endl;
    cout << "6. Fahrenheit to Kelvin" << endl;
    cout << "7. Exit" << endl;
    cout << endl;
    cout << "Input: " << endl;
}

void goback(){
    string x;
    cout << endl;
    cout << "Type anything to go back: " << endl;
    cin >> x;
    cout << endl;
    welcome();
}

double valueinput(){
    cout << "Input Value: ";
    int x;
    cin >> x;
    return x;
}

void inputbug(){
    cout << "Invalid Input" << endl;
    cin.clear();
    cin.ignore(1000, '\n');
}