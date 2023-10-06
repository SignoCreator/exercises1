#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <limits>

using namespace std;
/**
 * Questo programma chiede all'utente di inserire il proprio anno di nascita e calcola
 * la sua età supponendo che sia nato il 1 Gennaio.
 * L'anno di nascita deve essere un numero di quattro cifre e deve essere maggiore di 1900 e
 * minore dell'anno corrente.
 * Se l'input non soddisfa queste condizioni, il programma stampa un messaggio di errore e richiede
 * nuovamente l'input.
 * Se l'input soddisfa tutte le condizioni, il programma calcola l'età dell'utente sottraendo l'anno
 * di nascita dall'anno corrente e stampa l'età dell'utente.
 *
 * Autori: Alessio Tomasi e Diego Signorastri
 * Data: 06/10/2023
 * Università di Genova
 */
int main(){
    //DICHIARAZIONE VARIABILI
    time_t now = time(0);
    tm *localTime = localtime(&now);
    //anno attuale
    int year = 1900 + localTime-> tm_year;
    int birthday;
    //finché l'utente non inserisce una data valida
    while(true){
        cout<< "Inserisci anno di nascita: ";
        cin >> birthday;
        //se l'input non è un int p il cin fallisce in generale
        if(cin.fail()){
            //pulisco l'input
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Errore: inserisci un numero." << endl;
        }
        //se l'input è corretto controllo se rispetta il campo d'esistenza
        else if(birthday > year || birthday < 1900){
            cout << "Errore: l'anno di nascita deve essere un numero di quattro cifre e compresa tra 1900 e "<< year << endl;
        }else if(birthday/1000 == 0 || birthday/10000 != 0){
            cout << "Errore: l'anno di nascita deve essere un numero di quattro cifre." << endl;
        }else{
            break;
        }
    }
    //stampo la differenza per trovare l'età.
    cout << (year-birthday)<< endl;

    return 0;
}
