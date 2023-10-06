#include <iostream>
#include <limits>

using namespace std;

/**
 * Questo programma chiede all'utente di inserire due numeri interi e calcola
 * la loro somma.
 * I numeri devono essere interi validi.
 * Se l'input soddisfa queste condizioni, il programma calcola la somma dei numeri e stampa il risultato due volte.
 *
 * Autori: Alessio Tomasi e Diego Signorastri
 * Data: 06/10/2023
 * Università di Genova
 */

int main(){
    //DICHIARAZIONE VARIABILI
    int a=0,b=0;

    //INIZIALIZZAZIONE VARIABILI
    cout<< "Inserisci il primo numero :";
    while(!(cin>> a)){
        cout << "Per favore, inserisci un numero intero valido: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout<< "Inserisci il secondo numero :";
    while(!(cin>> b)){
        cout << "Per favore, inserisci un numero intero valido: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    //ALGORITMO
    cout<< a+b << endl;

}