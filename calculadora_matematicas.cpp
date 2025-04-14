#include <iostream>

using namespace std;

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

float dividir(int a, int b) {
    if (b == 0) {
        cout << "Error: No se puede dividir entre cero\n";
        return 0;
    }
    return (float)a / b;
}

int main() {
    int opcion, num1, num2;

    while (true) {
        cout << "1. Sumar dos numeros\n";
        cout << "2. Restar dos numeros\n";
        cout << "3. Multiplicar dos numeros\n";
        cout << "4. Dividir dos numeros\n";
        cout << "5. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingresa el primer numero: ";
            cin >> num1;
            cout << "Ingresa el segundo numero: ";
            cin >> num2;
        }

        switch (opcion) {
            case 1:
                cout << "Resultado: " << sumar(num1, num2) << "\n";
                break;
            case 2:
                cout << "Resultado: " << restar(num1, num2) << "\n";
                break;
            case 3:
                cout << "Resultado: " << multiplicar(num1, num2) << "\n";
                break;
            case 4:
                cout << "Resultado: " << dividir(num1, num2) << "\n";
                break;
            case 5:
                cout << "Gracias por usar la calculadora\n";
                return 0;
            default:
                cout << "Opcion no valida\n";
                break;
        }
    }

    return 0;
}
