#include <iostream>
#include <limits>

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
    int a = getInput("inserisci primo numero: ");
    int b = getInput("inserisci secondo numero: ");
    int c = getInput("inserisci terzo numero: ");

    //ALGORITMO
    if(a+b>c && a+c>b  && b+c>a) {
        cout << "puo' essere un triangolo";
    }else{
        cout << "non puo' essere un triangolo";
    }
    return 0;
}
