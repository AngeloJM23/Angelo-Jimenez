#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void encabezado(); // Declaraci�n de la funci�n encabezado

int main() {
    srand(time(0)); // Inicializaci�n de la semilla para n�meros aleatorios basada en el tiempo actual

    int opcionUsuario;
    int opcionComputadora;
    char seguirJugando;

    cout << "\n=========================================" << endl;
    encabezado(); // Llamada a la funci�n encabezado para imprimir informaci�n sobre el alumno y el curso


    do {
        cout << "\n=========================================" << endl;
        cout << "\nJuego de Piedra, Papel o Tijeras" << endl;
        cout << "1. Piedra\n2. Papel\n3. Tijeras\n4. Salir" << endl;
        cout << "Ingrese su eleccion (1-4): ";
        cin >> opcionUsuario;

        while (opcionUsuario < 1 || opcionUsuario > 4) {
            cout << "Entrada no valida. Ingrese su eleccion (1-4): ";
            cin >> opcionUsuario;
        }

        cout << "\n=========================================" << endl;

        if (opcionUsuario == 4) {
            break; // Salir del bucle si la opci�n es 4 (Salir)
        }

        opcionComputadora = rand() % 3 + 1; // Generaci�n aleatoria de la elecci�n de la computadora
        cout << "La computadora eligio: " << opcionComputadora << endl;

        if (opcionUsuario == opcionComputadora) {
            cout << "Empate :/ \n" << endl;
        } else if ((opcionUsuario == 1 && opcionComputadora == 3) ||
                   (opcionUsuario == 2 && opcionComputadora == 1) ||
                   (opcionUsuario == 3 && opcionComputadora == 2)) {
            cout << "�Ganaste! :)\n" << endl;
        } else {
            cout << "La computadora gano :( \n" << endl;
        }

        do {
            cout << "�Quieres jugar de nuevo (s/n): ";
            cin >> seguirJugando;

            if (seguirJugando != 's' && seguirJugando != 'S' && seguirJugando != 'n' && seguirJugando != 'N') {
                cout << "Entrada no valida. Por favor, ingresa 's' o 'n':\n ";
            }

        } while (seguirJugando != 's' && seguirJugando != 'S' && seguirJugando != 'n' && seguirJugando != 'N');

    } while (seguirJugando == 's' || seguirJugando == 'S');

    cout << "Gracias por jugar. Hasta luego." << endl;

    return 0;
}

void encabezado() {
    cout << "Universidad de las Fuerzas Armadas ESPE" << endl;
    cout << "Fecha: 09/11/2023" << endl;
    cout << "Alumno: Angelo David Jimenez Merino " << endl;
    cout << "Programacion Orientada a Objetos" << endl;
}
