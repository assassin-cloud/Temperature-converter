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

void goback(string x){
    cout << endl;
    cout << "Tpye anything to go back: " << endl;
    cin >> x;
    cout << endl;
    welcome();
}

void valueinput(double y){
    cout << "Input Value: ";
    cin >> y;
}

void inputbug(){
    cout << "Invalid Input" << endl;
    cin.clear();
    cin.ignore(1000, '\n');
}

void temperature(double x, double& a, double& b, double& y, double& j, double& k, double i){
    a = (x*1.8)+32;
    b = (x-32)/1.8;
    y = x - 273.15;
    j = (1.8*x) - 459.67;
    k =  x + 273.15;
    i = (x - 32)/1.8 + 273.15;
}

int main(){
    double value;
    double a = 0.0;
    double b = 0.0;
    double y = 0.0;
    double j = 0.0;
    double k = 0.0;
    double i = 0.0;
    int userinput;
    string back;
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
                temperature(value,a,b,y,j,k,i);
                cout << a << " fahrenheit" << endl;
                goback(back);
            }
            else if(userinput == 2){
                valueinput(value);
                temperature(value,a,b,y,j,k,i);
                cout << b << " celsius" << endl;
                goback(back);
            }
            else if(userinput == 3){
                valueinput(value);
                temperature(value,a,b,y,j,k,i);
                cout << y << " celsius" << endl;
                goback(back);
            }
            else if(userinput == 4){
                valueinput(value);
                temperature(value,a,b,y,j,k,i);
                cout << j << "fahrenheit" << endl;
                goback(back);
            }
            else if(userinput == 5){
                valueinput(value);
                temperature(value,a,b,y,j,k,i);
                cout << k << " Kelvin" << endl;
                goback(back);
            }
            else if(userinput == 6){
                valueinput(value);
                temperature(value,a,b,y,j,k,i);
                cout << i << " Kelvin" << endl;
                goback(back);
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
