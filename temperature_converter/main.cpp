#include "functiondecl.h"
#include<iostream>
using namespace std;

int main(){
    int userinput;
    while(true){
        welcome();
        cin >> userinput;
        if(cin.fail()){
            inputbug();
        }
        else{
            if(userinput == 1){
                double value { valueinput() };
                cout << cf(value) << " Fahrenheit" << endl;
                goback();
            }
            else if(userinput == 2){
                double value { valueinput() };
                cout << fc(value) << " celsius" << endl;
                goback();
            }
            else if(userinput == 3){
                double value { valueinput() };
                cout << kc(value) << " celsius" << endl;
                goback();
            }
            else if(userinput == 4){
                double value { valueinput() };
                cout << kf(value) << " fahrenheit" << endl;
                goback();
            }
            else if(userinput == 5){
                double value { valueinput() };
                cout << ck(value) << " Kelvin" << endl;
                goback();
            }
            else if(userinput == 6){
                double value { valueinput() };
                cout << fk(value) << " Kelvin" << endl;
                goback();
            }
            else if(userinput == 7){
                break;
            }
            else{
                cout << "Invalid input!" << endl;
            }
        }
    }
}