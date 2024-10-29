#include <iostream>
using namespace std;

class CuentaBancaria {
private:
    float sueldo = 20000;
public:
    void consultarSaldo() {
        cout << "Su saldo actual es de: " << sueldo << endl;
    }
    void retirarEfectivo() {
        int n;
        cout << "Ingresa cuanto quieres retirar: " << endl;
        cin >> n;
        if (n <= sueldo) {
            sueldo -= n;
            cout << "Retiro exitoso. Su saldo actual es de: " << sueldo << endl;
        }
        else {
            cout << "Cantidad inválida, ingrese otro monto" << endl;
        }
    }
};

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n, opc;
    CuentaBancaria cuenta;

    do {
        cout << endl << "Menu de funciones: " << endl
            << "1. Calcular factorial" << endl
            << "2. Cajero automatico" << endl
            << "0. Salir" << endl
            << "Ingresa una opcion: ";
        cin >> opc;

        switch (opc) {
        case 1:
            cout << "Ingresa un numero para calcular su factorial: ";
            cin >> n;
            cout << "El factorial de " << n << " es " << factorial(n) << endl;
            break;
        case 2:
            int opc2;
            do {
                cout << endl << "Menu bancario" << endl
                    << "1. Consultar saldo" << endl
                    << "2. Retirar efectivo" << endl
                    << "0. Salir" << endl
                    << "Ingresa una opcion: ";
                cin >> opc2;
                switch (opc2) {
                case 1:
                    cuenta.consultarSaldo();
                    break;
                case 2:
                    cuenta.retirarEfectivo();
                    break;
                case 0:
                    cout << "Saliendo..." << endl;
                    break;
                default:
                    cout << "Opcion no valida." << endl;
                    break;
                }
            } while (opc2 != 0);
        case 0:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion no disponible..." << endl;
            break;
        }

    } while (opc != 0);
    return 0;
}
