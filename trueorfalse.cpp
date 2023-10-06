#include <iostream>
using namespace std;
/**
 * Questo programma stampa il risultato di diverse espressioni booleane.
 *
 * Autori: Alessio Tomasi e Diego Signorastri
 * Data: 06/10/2023
 * Università di Genova
 */

int main(){

    //ALGORITMO
    cout << boolalpha;
    cout << "tre e' maggiore di uno: " << (3>1) << endl;
    cout << "quattro diviso due e' minore di zero: " << (4/2 < 0) << endl;
    cout << "il carattere `zero` e' uguale al valore zero: " << ('0' == 0) << endl;
    cout << "dieci mezzi e' compreso fra zero escluso e dieci incluso (ossia: dieci mezzi e' maggiore di zero E dieci mezzi e' minore ouguale a dieci)" << (10/2 > 0 && 10/2 <= 10) << endl;
    cout << "non e' vero che tre e' maggiore di due e minore di uno: " << !(3>2 && 3<1) << endl;
    cout << "tre minore di meno cinque implica sette maggiore di zero: " << (!(3<-5) || (7>0)) << endl;

    return 0;
}
