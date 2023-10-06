#include <iostream>

using namespace std;
/**
 * Questo programma chiede all'utente di inserire un'ora (in formato 24 ore) e calcola
 * il numero totale di minuti passati da mezzanotte.
 * L'ora deve essere un numero intero tra 0 e 23, e i minuti devono essere un numero intero tra 0 e 59.
 * Se l'input non soddisfa queste condizioni, il programma stampa un messaggio di errore e richiede
 * nuovamente l'input.
 * Se l'input soddisfa tutte le condizioni, il programma calcola il numero totale di minuti passati da mezzanotte
 * e stampa il risultato.
 *
 * Autori: Alessio Tomasi e Diego Signorastri
 * Data: 06/10/2023
 * Università di Genova
 */


int main(){

    //DICHIARAZIONE VARIABILI
    int h=-1,m=-1;

    //INIZIALIZZAZIONE VARIABILI
    while(h<0 || h>23){
        cout<<"inserisci l`ora (tra 0 e 23):";
        cin>> h;
    }
    while(m<0 || m>59){
        cout<<"inserisci i minuti (tra 0 e 59):";
        cin>> m;
    }

    //ALGORITMO
    cout << "minuti totali: "<< h* 60 + m << endl;

    return 0;
}
