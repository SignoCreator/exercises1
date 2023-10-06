#include <iostream>
#include <limits>
using namespace std;
#define PI 3.14

/**
 * Questo programma chiede all'utente di inserire il raggio di un cerchio e calcola
 * la circonferenza e l'area del cerchio.
 * Il raggio deve essere un numero reale positivo.
 * Se l'input soddisfa queste condizioni, il programma calcola la circonferenza e l'area
 * del cerchio utilizzando le formule matematiche appropriate e stampa i risultati.
 *
 * La circonferenza viene calcolata come `2 * PI * raggio` e l'area viene calcolata come `PI * raggio^2`,
 * dove `PI` è una costante definita come 3.14.
 *
 * Autori: Alessio Tomasi e Diego Signorastri
 * Data: 06/10/2023
 * Università di Genova
 */

int main(){
    //DICHIARAZIONE VARIABILI
    float r = -1;

    //INIZIALIZZAZIONE VARIABILI
    while (r < 0) {
        cout<< "inserisci raggio:";
        cin>> r;
        if (cin.fail()) {
            cin.clear(); // resetta lo stato di cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // svuota il buffer di input
            cout << "Errore: Devi inserire un numero." << endl;
            r = -1; // resetta r per continuare il ciclo
        } else if (r < 0) {
            cout << "Errore: Il raggio deve essere positivo." << endl;
        }
    }

    //ALGORITMO
    cout<<"circonferenza: "<< r*2 * PI<<endl;
    cout<<"area: "<< r*r * PI<<endl;

    return 0;
}
