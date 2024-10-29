/**Autor: Marcos Casas Caldera**/
/**Nombre de archivo: Factorial.cpp**/
/**Descripcion: Este codigo calcula el factorial de un numero y genera una cuenta bancaria**/

#include <iostream>
using namespace std;

/**Se crea una clase de Cuenta Bancaria con sus metodos y atributos**/
class CuentaBancaria {
private:
    /**Se inicaliza la cuenta con 20000 de sueldo**/
    float sueldo = 20000;
public:
    /**Este metodo imprime en pantalla el sueldo del usuario**/
    void consultarSaldo() {
        cout << "Su saldo actual es de: " << sueldo << endl;
    }
    /**Este metodo toma la entrada del usuario y la descuenta del saldo disponible**/
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
    /**En caso de que n sea igual a 0, se regresa 1**/
    if (n == 0) {
        return 1;
    }
    else {
        /**Usando recursividad, se retorna el numero mutiplicado por ese mismo numero - 1, hasta llegar a 0**/
        return n * factorial(n - 1);
    }
}

int main() {
    /**Se inicializan las variables y la instancia de la clase CuentaBancaria**/
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
    /**Permite poder ejecutar el ejecutable sin que se cierre la consola**/
    system("pause");
    return 0;
}
