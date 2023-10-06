#include <iostream>
#include <limits>

using namespace std;

/**
 * Questo programma chiede all'utente di inserire due numeri interi e poi scambia i loro valori.
 * I numeri devono essere interi validi.
 * Se l'input soddisfa queste condizioni, il programma esegue lo scambio dei numeri e stampa i valori prima e dopo lo scambio.
 *
 * Autori: Alessio Tomasi e Diego Signorastri
 * Data: 06/10/2023
 * Università di Genova
 */

int main(){

    //DICHIARAZIONE VARIABILI
    int a=0,b=0,temp;

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
    cout<< "valori iniziali (a,b): ("<< a << "," << b << ")" << endl;

    //ALGORITMO
    temp=a;
    a=b;
    b = temp;
    cout<< "valori finali (a,b): ("<< a << "," << b << ")" << endl;

    return 0;

}