#include <iostream>

/**
 * Questo programma chiede all'utente di inserire la base e l'altezza di un rettangolo e calcola
 * l'area e il perimetro del rettangolo.
 * La base e l'altezza devono essere numeri reali positivi.
 * Se l'input soddisfa queste condizioni, il programma calcola l'area e il perimetro del rettangolo e stampa i risultati.
 *
 * Autori: Alessio Tomasi e Diego Signorastri
 * Data: 06/10/2023
 * Università di Genova
 */

using namespace std;
int main(){

    //DICHIARAZIONE VARIABILI
    float base,altezza;

    //INIZIALIZZAZIONE VARIABILI
    cout<< "inserisci base:";
    cin>> base;
    cout<< "inserisci altezza:";
    cin>> altezza;

    //ALGORITMO
    cout<< "area: "<< base * altezza << endl;
    cout<< "perimetro: "<< base * 2 + 2*altezza << endl;

    return 0;
}
