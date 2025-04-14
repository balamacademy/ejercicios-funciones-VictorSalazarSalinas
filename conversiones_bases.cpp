#include <iostream>

using namespace std;

void decimalABinario(int n) {
    if (n == 0) return;
    decimalABinario(n / 2);  
    cout << n % 2;  
}

void decimalAOctal(int n) {
    if (n == 0) return;
    decimalAOctal(n / 8);  
    cout << n % 8;  
}

void decimalAHexadecimal(int n) {
    if (n == 0) return;
    decimalAHexadecimal(n / 16);  
    int residuo = n % 16;
    if (residuo < 10)
        cout << residuo;  
    else
        cout << (char)('A' + residuo - 10);  
}

int main() {
    int opcion, numero;

    while (true) {
        cout << "1 Decimal a Binario\n";
        cout << "2 Decimal a Octal\n";
        cout << "3 Decimal a Hexadecimal\n";
        cout << "4 Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (opcion) {
            case 1:
                cout << "Numero decimal: ";
                cin >> numero;
                if (numero == 0) {
                    cout << "Binario: 0\n";
                } else {
                    cout << "Binario: ";
                    decimalABinario(numero);
                    cout << "\n";
                }
                break;
            case 2:
                cout << "Numero decimal: ";
                cin >> numero;
                if (numero == 0) {
                    cout << "Octal: 0\n";
                } else {
                    cout << "Octal: ";
                    decimalAOctal(numero);
                    cout << "\n";
                }
                break;
            case 3:
                cout << "Numero decimal: ";
                cin >> numero;
                if (numero == 0) {
                    cout << "Hexadecimal: 0\n";
                } else {
                    cout << "Hexadecimal: ";
                    decimalAHexadecimal(numero);
                    cout << "\n";
                }
                break;
            case 4:
                return 0;
            default:
                break;
        }
    }

    return 0;
}
