#include <iostream>
#include <limits>

using namespace std;

//DICHIARAZIONE FUNZIONI
/**
 * Funzione per ricezione input e validazione
 *
 *
 * @param prompt stringa da stampare a schermo
 * @return input validato (float)
 */
long double getInput(string prompt){
    long double number;
    cout << prompt << endl;
    while(!(cin >> number)){
        cout << "Per favore, inserisci un numero valido: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return number;
}

int main(){
    //DICHIARAZIONE E INIZIALIZZAZIONE VARIABILI
    long double a = getInput("inserisci un numero reale: ");
    const float b =  4.9;
    const float c =  3.53;
    const float d =  6.9998;
    long double temp = a/b/c/d;
    long double temp2 = temp*b*c*d;
    if(a - temp2 == 0.0){
        cout << "Uguale"<<endl;
    }else{
        cout<< "moltiplicare NON e' l'inverso di dividere" << endl;
    }


    return 0;
}
