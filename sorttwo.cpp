#include <iostream>
#include <limits>

using namespace std;

/**
 * RICHIESTA:
 *
 * Scrivere un programma che legge due numeri e li stampa in ordine crescente senza confrontarli. Il programma deve essere
 * scritto in un file chiamato sorttwo.cpp.
 *
 * SOLUZIONE:
 *
 * Avendo due numeri a,b sappiamo che la loro media è per definizione il numero che si trova equidistante
 * da entrambi questo equivale a dire che
 *
 * se a-b<0 => a=(a+b)/2-(b-a)/2 and b=(a+b)/2+(b-a)/2
 * se a-b>0 => b=(a+b)/2-(b-a)/2 and a=(a+b)/2+(b-a)/2
 *
 * questo può essere semplificato:
 *
 * min = (a+b)/2-|b-a|/2
 * max = (a+b)/2+|b-a|/2
 *
 * Autori: Alessio Tomasi e Diego Signorastri
 * Data: 06/10/2023
 * Università di Genova
 */
int main() {
    //DICHIARAZIONE VARIABILI
    double a,b;
    //INIZIALIZZAZIONE VARIABILI
    cout<<"inserisci primo valore: " << endl;
    //finché non ricevo un double valido
    while(!(cin>> a)){
        cout << "Per favore, inserisci un numero valido: " << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    //finché non ricevo un double valido
    cout<<"inserisci secondo valore: "<< endl;
    while(!(cin>> b)){
        cout << "Per favore, inserisci un numero valido: "<< endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    double mean = (a+b)/2;
    double semidistance = abs(a-b)/2;
    cout<< (mean-semidistance) << " " << (mean+semidistance)  << endl;

}
