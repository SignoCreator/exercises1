#include <iostream>

using namespace std;

/**
 * Questo programma chiede all'utente di inserire due caratteri e poi scambia i loro valori.
 * I caratteri devono essere validi.
 * Se l'input soddisfa queste condizioni, il programma esegue lo scambio dei caratteri e stampa i valori prima e dopo lo scambio.
 *
 * Autori: Alessio Tomasi e Diego Signorastri
 * Data: 06/10/2023
 * Università di Genova
 */

int main(){

    //DICHIARAZIONI VARIABILI
    char a=' ',b=' ',temp=' ';

    //INIZIALIZZAZIONE VARIABILI
    cout<< "inserisci il primo carattere :";
    cin>> a;    
    cout<< "inserisci il secondo carattere :";
    cin>> b;
    cout<< "valori iniziali (primo,secondo): ("<< a << "," << b << ")" << endl;

    //ALGORITMO
    temp=a;
    a=b;
    b = temp;
    cout<< "valori finali (primo,secondo): ("<< a << "," << b << ")" << endl;

    return 0;

}