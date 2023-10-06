#include <iostream>
#include <limits>

using namespace std;
/**
 * RICHIESTA:
 *
 * Scrivere un programma che scambia fra loro i valori di due variabili int senza usare variabili di appoggio.
 * Il programma deve essere scritto in un file chiamato magicswap.cpp.
 *
 *
 * SUGGERIMENTO:
 * l’or esclusivo, o XOR (in C++ l’operatore ^), gode di varie proprietà, tra cui:
 *
 * la proprietà di simmetria – cioè A^B == B^A
 * la proprietà associativa – cioè (A^B)^C == A^(B^C).
 * A^A == 0 e A^0 == A qualsiasi A, B e C.
 *
 *
 * SOLUZIONE:
 * Lo xor è un'operazione binaria ( che opera su bit ) e restituisce 1 se un bit è 1 e l'altro è 0:
 *
 * -tabella:
 *
 *      a    |    b    |   result
 *      0    |    0    |     0
 *      0    |    1    |     1
 *      1    |    0    |     1
 *      1    |    1    |     0
 *
 *
 * supponiamo di voler cambiare a=0 e b=1:
 *
 * sappiamo che le ipotesi valgono per qualsiasi A,B e C. Noi abbiamo 2 valori (a e b).
 * xor1 = a^b
 * APPLICO LA PROPRIETA' ASSOCIATIVA AD a^b^b
 * xor2 = xor1^b  <=> xor2 = a^b^b = a^0 = a quindi ora xor2 ha il valore di a
 * xor3 = xor2 ^ xor1 <=> xor3 = a^a^b = 0^b = b
 *
 *
 * in questo modo abbiamo sfruttato, usufruendo del suggerimento dato, dell'operatore xor e delle
 * sue proprietà al fine di partire da uno xor e ricavare entrambi i valori operati.
 *
 * Autori: Alessio Tomasi e Diego Signorastri
 * Data: 06/10/2023
 * Università di Genova
 */
int main(){

    //DICHIARAZIONE VARIABILI
    int a,b;

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

    //ALGORITMO ( vedi documentazione sopra )
    cout << "Prima dello scambio: a = " << a << ", b = " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "Dopo lo scambio: a = " << a << ", b = " << b << endl;

    return 0;
}