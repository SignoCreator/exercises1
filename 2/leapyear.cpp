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
    int anno = getInput("inserisci un numero intero: ");
    if(anno%4 == 0){
        cout<< "rappresenta anno bisestile";
    }else{
        cout<< "non rappresenta anno bisestile";
    }

    return 0;
}
