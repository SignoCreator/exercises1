#include <iostream>
#include <limits>

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
    cout<< "Inserisci base :";
    while(!(cin>> base)){
        cout << "Per favore, inserisci un numero intero valido: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout<< "Inserisci altezza :";
    while(!(cin>> altezza)){
        cout << "Per favore, inserisci un numero intero valido: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    //ALGORITMO
    cout<< "area: "<< base * altezza/2 << endl;

    return 0;
}
