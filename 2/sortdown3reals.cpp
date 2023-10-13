#include <iostream>
#include <string>
#include <limits>

using namespace std;

float getInput(string prompt){
    float number;
    cout << prompt << endl;
    while(!(cin >> number)){
        cout << "Per favore, inserisci un numero valido: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return number;
}

int main(){

    // chiedere di inserire tre numeri interi
    // dichiarare tre variabili a0, a1 e a2 di tipo int
    // leggere a0, a1 e a2
    float a0 = getInput("inserisci primo numero: ");
    float a1 = getInput("inserisci secondo numero: ");
    float a2 = getInput("inserisci terzo numero: ");

    // ordinare a0, a1 e a2, ovvero:
    // dichiarare una variabile intera aux inizializzata con a1
    float aux=a1;

    // se a0 maggiore di a1 scambiare fra loro a0 e a1, cioe'
    // - assegnare ad a1 il valore di a0, ad a0 il valore di aux e...
    // ... ad aux il valore di a1 (a questo punto a0 <= a1==aux)
    if( a0 > a1 ){
        a1 = a0;
        a0 = aux;
        aux = a1;
    }
    // se a0 maggiore di a2
    // - assegnare ad a1 il valore di a0, ad a0 il valore di a2 e...
    // ... ad a2 il valore di aux
    if( a0 > a2 ){
        a1 = a0;
        a0 = a2;
        a2 = aux;
    }
        // altrimenti
        // - se a1 maggiore di a2 scambiare fra loro a1 e a2, cioe'
        // -- assegnare ad a1 il valore di a2, ad a2 il valore...
        // ... di aux (a questo punto a0<=a1<=a2)
    else   if( a1 > a2 ){
        a1 = a2;
        a2 = aux;
    }

    // stampare la stringa "I numeri inseriti, in ordine crescente, sono: "
    // stampare il valore di a0, seguito dal carattere <
    // stampare il valore di a1, seguito dal carattere <
    // stampare il valore di a2
    // stampare un a capo
    //non è vera l'affermazione a1<a2<a3 nel caso in cui almeno due valori fossero uguali.
    cout << "I numeri inseriti, in ordine crescente, sono: "<< a2 << ">="<< a1 << ">="<< a0 << endl;
    return 0;
}