/*
Asignación 2: Tres Numeros Aleatorios
Nombre: Alejandro Lamas
Núm. Est: 801-23-0896
Colaboraciones: N/A
*/

// Incluimos las librerias necesarias
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    //Inicializamos el generador de numeros aleatorios
    srand(time(0));

    // Introducimos nuestras tres variables
    int random_n1, random_n2, random_n3;

    // Se les da un valor aleatorio a cada una, teniendo el 100 como valor maximo, y 0 como el minimo
    random_n1 = rand() % (100 - 0 + 1) + 0;
    random_n2 = rand() % (100 - 0 + 1) + 0;
    random_n3 = rand() % (100 - 0 + 1) + 0;

    // Se desplegan los valores obtenidos
    cout << "Numeros aleatorios generados: " << random_n1 << ", " << random_n2 << ", " << random_n3 << endl;

    // Empezamos a comparar los valores, empezando con "random_n1" como valor principal, and so on...
    if ((random_n1 > random_n2) && (random_n1 > random_n3)) {
        // Se comparan los siguientes dos valores
        if (random_n2 > random_n3) {
            cout << "Orden decendiente: " << random_n1 << " >= " << random_n2 << " >= " << random_n3 << endl;
        }
        else {
            cout << "Orden decendiente: " << random_n1 << " >= " << random_n3 << " >= " << random_n2 << endl;
        }
    }

    // Ahora intentamos con "random_n2" como valor lider
    else if ((random_n2 > random_n1) && (random_n2 > random_n3)) {
        // Se comparan los siguientes dos valores
        if (random_n1 > random_n3) {
            cout << "Orden decendiente: " << random_n2 << " >= " << random_n1 << " >= " << random_n3 << endl;
        }
        else {
            cout << "Orden decendiente: " << random_n2 << " >= " << random_n3 << " >= " << random_n1 << endl;
        }
    }
    // Y por ultimo, "random_n3"
    else if ((random_n3 > random_n2) && (random_n3 > random_n1)) {
        // Se comparan los siguientes dos valores
        if (random_n2 > random_n1) {
            cout << "Orden decendiente: " << random_n3 << " >= " << random_n2 << " >= " << random_n1 << endl;
        }
        else {
            cout << "Orden decendiente: " << random_n3 << " >= " << random_n1 << " >= " << random_n2 << endl;
        }
    }

    return 0;
}
