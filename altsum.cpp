#include <iostream>
using namespace std;
#include <limits>

/**
 * Questo programma chiede all'utente di inserire due numeri interi e calcola
 * la loro somma.
 * I numeri devono essere interi validi.
 * Se l'input non soddisfa queste condizioni, il programma stampa un messaggio di errore e richiede
 * nuovamente l'input.
 * Se l'input soddisfa tutte le condizioni, il programma calcola la somma dei numeri e stampa il risultato.
 *
 * Autori: Alessio Tomasi e Diego Signorastri
 * Data: 06/10/2023
 * Università di Genova
 */



int main(){

    //DICHIARAZIONE VARIABILI
    int a=0,b=0,sum;
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
    sum = a+b;
    cout<< sum << endl;
    return 0;
}

