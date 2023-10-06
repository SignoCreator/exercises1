#include <iostream>

/**
 * Questo programma chiede all'utente di inserire due numeri interi e calcola
 * la loro media.
 * I numeri devono essere interi validi.
 * Se l'input soddisfa queste condizioni, il programma calcola la media dei numeri e stampa il risultato.
 *
 * Autori: Alessio Tomasi e Diego Signorastri
 * Data: 06/10/2023
 * Università di Genova
 */

using namespace std;
int main(){
    //DICHIARAZIONE VARIABILI
    int a,b;
    //INIZIALIZZAZIONE VARIABILI
    cout<< "inserisci primo numero:";
    cin>> a;
    cout<< "inserisci secondo numero:";
    cin>> b;
    cout<< "media: " << (a + b)/2.0<< endl;
    return 0;
}
