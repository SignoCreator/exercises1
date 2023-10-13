#include <iostream>
#include <limits>

using namespace std;

//DICHIARAZIONE FUNZIONI

char getInput(const string& prompt){
    string number;
    cout << prompt;
    while(!(cin >> number) || number.length() != 1  || number[0]!= 'f' || number[0]!= 'c' || number[0]!= 's'){
        if(number.length() != 1){
            cout << "Per favore, inserisci un solo carattere: ";
        }else{
            cout << "Per favore, inserisci un carattere valido (f,c,s): ";
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return number[0];
}
int winner(char mossa1, char mossa2){

    if(mossa1 == 'f'){
        switch(mossa2){
            case 'c':
                return 1;
            case 'f':
                return 0;
            case 's':
                return -1;
            default:
                break;
        }
    }
    return -2;
}
int main(){
    //DICHIARAZIONE E INIZIALIZZAZIONE VARIABILI
    char mossa1 = getInput("Utente A inserisci un carattere (f,c,s): ");
    char mossa2 = getInput("Utente B inserisci un carattere (f,c,s): ");



    return 0;
}
