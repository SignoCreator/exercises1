#include <iostream>
#include <limits>

using namespace std;

/**
 * Questo programma chiede all'utente di inserire tre numeri reali e poi scambia i loro valori.
 * Il primo numero prende il valore del secondo, il secondo prende il valore del terzo, e il terzo prende il valore originale del primo.
 * I numeri devono essere reali validi.
 * Se l'input soddisfa queste condizioni, il programma esegue lo scambio dei numeri e stampa i valori prima e dopo lo scambio.
 *
 * Autori: Alessio Tomasi e Diego Signorastri
 * Data: 06/10/2023
 * Università di Genova
 */
int main(){
    //DICHIARAZIONE VARIABILI
    float a,b,c,temp;
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
    cout<< "inserisci il terzo carattere :";
    while(!(cin>> c)){
        cout << "Per favore, inserisci un numero intero valido: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    //ALGORITMO
    cout<< "valori iniziali (primo,secondo,terzo): ("<< a << "," << b <<  "," << c<<")" << endl;
    temp = a;
    a = b;
    b = c;
    c = temp;
    cout<< "valori finali (primo,secondo): ("<< a << "," << b <<  "," << c<<")" << endl;

    return 0;

}