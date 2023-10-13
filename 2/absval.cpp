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
int getInput(string prompt){
    int number;
    cout << prompt << endl;
    while(!(cin >> number)){
        cout << "Per favore, inserisci un numero valido: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return number;
}
 int abs( int a){
    if(a<0){
        return a*-1;
    }
    return a;
}
int main(){
    //DICHIARAZIONE E INIZIALIZZAZIONE VARIABILI
     int a = getInput("inserisci numero: ");

    //ALGORITMO
    cout<< abs(a) << endl;

    return 0;
}
