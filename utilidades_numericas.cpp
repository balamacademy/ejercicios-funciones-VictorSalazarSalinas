#include <iostream>

using namespace std;

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int factorial(int n) {
    if (n == 0) return 1;
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int contarDigitos(int n) {
    int contador = 0;
    while (n > 0) {
        n /= 10;
        contador++;
    }
    return contador;
}

int sumarDigitos(int n) {
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

int main() {
    int opcion, numero;

    while(true) {
        cout<<"1 Verificar si un numero es primo\n";
        cout<<"2 Calcular el factorial de un numero\n";
        cout<<"3 Contar cuántos digitos tiene un numero\n";
        cout<<"4 Sumar los digitos de un numero\n";
        cout<<"5 Salir\n";
        cout<<"Opcion: ";
        cin>>opcion;

        if(cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch(opcion) {
            case 1:
                cout<<"Numero: ";
                cin>>numero;
                if(esPrimo(numero)) {
                    cout<<"Es primo\n";
                } else {
                    cout<<"No es primo\n";
                }
                break;
            case 2:
                cout<<"Numero: ";
                cin>>numero;
                if(numero < 0) {
                    cout<<"Factorial no definido para numeros negativos\n";
                } else {
                    cout<<"Factorial: "<<factorial(numero)<<"\n";
                }
                break;
            case 3:
                cout<<"Numero: ";
                cin>>numero;
                cout<<"Digitos: "<<contarDigitos(numero)<<"\n";
                break;
            case 4:
                cout<<"Numero: ";
                cin>>numero;
                cout<<"Suma de digitos: "<<sumarDigitos(numero)<<"\n";
                break;
            case 5:
                return 0;
            default:
                break;
        }
    }

    return 0;
}
