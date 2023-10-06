#include <iostream>
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
    
    //INIZIALIZZAZIONE VARIABLI
    cout<< "inserisci il primo numero :";
    cin>> a;    
    cout<< "inserisci il secondo numero :";
    cin>> b;
    //ALGORITMO
    cout<< a+b << endl;
    cout<< a+b << endl;

}