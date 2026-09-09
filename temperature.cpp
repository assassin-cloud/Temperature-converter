#include<iostream>
using namespace std;

void welcome(){
    cout << "==============" << endl;
    cout << "Temp converter" << endl;
    cout << "==============" << endl;
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
// Celcius to Fahrenheit
double cf(double x){
    return ((x*1.8)+32);
}
// Fahrenheit to Celcius
double fc(double x){
    return ((x-32)/1.8);
}
// Kelvin to Celcius
double kc(double x){
    return (x - 273.15);
}
// Kelvin to Fahrenheit
double kf(double x){
    return ((1.8*x) - 459.67);
}
// Celsius to Kelvin
double ck(double x){
    return (x + 273.15);
}
// Fahrenheit to Kelvin
double fk(double x){
    return ((x - 32)/1.8 + 273.15);
}

void goback(){
    string x;
    cout << endl;
    cout << "Type anything to go back: " << endl;
    cin >> x;
    cout << endl;
    welcome();
}

void valueinput(double& y){
    cout << "Input Value: ";
    cin >> y;
}

void inputbug(){
    cout << "Invalid Input" << endl;
    cin.clear();
    cin.ignore(1000, '\n');
}

/*void temperature(double x, double& a, double& b, double& y, double& j, double& k, double& i){
    a = (x*1.8)+32;
    b = (x-32)/1.8;
    y = x - 273.15;
    j = (1.8*x) - 459.67;
    k =  x + 273.15;
    i = (x - 32)/1.8 + 273.15;
}*/

int main(){
    double value;
    int userinput;
    welcome();
    while(true){
        cin >> userinput;
        if(cin.fail()){
            inputbug();
            welcome();
        }
        else{
            if(userinput == 1){
                valueinput(value);
                cout << cf(value) << " Fahrenheit" << endl;
                goback();
            }
            else if(userinput == 2){
                valueinput(value);
                cout << fc(value) << " celsius" << endl;
                goback();
            }
            else if(userinput == 3){
                valueinput(value);
                cout << kc(value) << " celsius" << endl;
                goback();
            }
            else if(userinput == 4){
                valueinput(value);
                cout << kf(value) << "fahrenheit" << endl;
                goback();
            }
            else if(userinput == 5){
                valueinput(value);
                cout << ck(value) << " Kelvin" << endl;
                goback();
            }
            else if(userinput == 6){
                valueinput(value);
                cout << fk(value) << " Kelvin" << endl;
                goback();
            }
            else if(userinput == 7){
                break;
            }
            else{
                cout << "Invalid input!" << endl;
                welcome();
            }
        }
    }
}
