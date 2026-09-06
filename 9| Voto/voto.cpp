// Includo le direttive

#include <iostream>
using namespace std;

// Funzione principale(main)

int main() {

    int age;

    // Inserimento anni

    cout << "Inserisci la tua età: ";
    cin >> age;

    // Caso maggiore dei 18

    if (age > 18) {

        cout << "\nPuoi votare!";

    }

    // Caso minore dei 18

    else {

        cout << "\nNon puoi votare!";

    }

    return 0;
    
}