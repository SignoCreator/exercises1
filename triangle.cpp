#include <iostream>

/**
 * Questo programma chiede all'utente di inserire la base e l'altezza di un triangolo e calcola
 * l'area del triangolo.
 * La base e l'altezza devono essere numeri reali positivi.
 * Se l'input soddisfa queste condizioni, il programma calcola l'area del triangolo e stampa il risultato.
 * *
 * Autori: Alessio Tomasi e Diego Signorastri
 * Data: 06/10/2023
 * Università di Genova
 */

using namespace std;

int main(){

    //DICHIARAZIONE VARIABILI
    float base,altezza;

    //INIZIALIZZAZIONE VARIABILI
    cout<< "CALCOLO AREA TRIANGOLO CON BASE E ALTEZZA"<<endl;
    cout<< "inserisci base:";
    cin>> base;    
    cout<< "inserisci altezza:";
    cin>> altezza;

    //ALGORITMO
    cout<< "area: "<< base * altezza/2 << endl;

    return 0;
}
