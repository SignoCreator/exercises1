#include <iostream>
#include <limits>
/**
 * Questo programma chiede all'utente di inserire due numeri interi e calcola
 * la loro media.
 * I numeri devono essere interi validi.
 * Se l'input soddisfa queste condizioni, il programma calcola la media dei numeri e stampa il risultato.
 *
 * Attenzione: Il codice così come è prende un numero e lo trasforma in intero.
 * Autori: Alessio Tomasi e Diego Signorastri
 * Data: 06/10/2023
 * Università di Genova
 */
using namespace std;

//DICHIARAZIONE FUNZIONI
/**
 * Funzione per ricezione input e validazione
 *
 *
 * @param prompt stringa da stampare a schermo
 * @return input validato (float)
 */
int getInput(string prompt){
    int number;
    cout << prompt << endl;
    while(!(cin >> number)){
        cout << "Per favore, inserisci un numero valido: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return number;
}

int main(){
    //DICHIARAZIONE E INIZIALIZZAZIONE VARIABILI
    int a = getInput("inserisci numero intero: ");
    const int divisore = 13;
    //ALGORITMO
    if(a%divisore == 0){
        cout<< "divisibile per "<< divisore <<endl;
    }
    else{
        cout<< "non divisibile per "<< divisore <<endl;
    }
    return 0;
}
