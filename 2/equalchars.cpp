#include <iostream>
#include <string>
#include <limits>

using namespace std;

char getInput(const string& prompt){
    string number;
    cout << prompt;
    while(!(cin >> number) || number.length() != 1){
        if(number.length() != 1){
            cout << "Per favore, inserisci un solo carattere: ";
        }else{
            cout << "Per favore, inserisci un carattere valido: ";
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return number[0];
}
int main(){

    char a = getInput("inserisci primo carattere: ");
    char b = getInput("inserisci secondo carattere: ");

    if(a == b){
        cout << "Uguali"<< endl;
    }else{
        cout << "Diversi"<< endl;
    }

    return 0;
}
