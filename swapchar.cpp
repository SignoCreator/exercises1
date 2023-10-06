#include <iostream>
#include <limits>

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
    cout<<"inserisci primo carattere: " << endl;
    //finché non ricevo un double valido
    while(!(cin>> a)){
        cout << "Per favore, inserisci un carattere valido: " << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    //finché non ricevo un double valido
    cout<<"inserisci secondo carattere: "<< endl;
    while(!(cin>> b)){
        cout << "Per favore, inserisci un carattere valido: "<< endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout<< "valori iniziali (primo,secondo): ("<< a << "," << b << ")" << endl;

    //ALGORITMO
    temp=a;
    a=b;
    b = temp;
    cout<< "valori finali (primo,secondo): ("<< a << "," << b << ")" << endl;

    return 0;

}