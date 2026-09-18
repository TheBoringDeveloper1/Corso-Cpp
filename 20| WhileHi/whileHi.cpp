// Includo le direttive

#include <iostream>
using namespace std;

// Funzione principale(main)

int main() {

    // Variabile ciclo

    char running = 'y';

    // Ciclo di iterazione

    while (running == 'y') {

        // Stampa del ciclo

        cout << "\nHello!";

        // Inserimento ripetizione

        cout << "\nRipetere(y/n): ";
        cin >> running;

    }

    // Fine del ciclo
    
    cout << "\nFine del ciclo di iterazione";

    return 0;

}