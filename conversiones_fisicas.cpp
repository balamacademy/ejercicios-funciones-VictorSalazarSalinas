#include <iostream>

using namespace std;

float celsiusAFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

float fahrenheitACelsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}

float metrosAPies(float m) {
    return m * 3.28084;
}

float kilogramosALibras(float kg) {
    return kg * 2.20462;
}

void limpiarEntrada() {
    cin.clear();
    cin.ignore(10000,'\n');
}

int main() {
    int opcion;
    float valor;
    bool salir=false;

    while(!salir) {
        cout<<"1 Celsius a Fahrenheit\n";
        cout<<"2 Fahrenheit a Celsius\n";
        cout<<"3 Metros a Pies\n";
        cout<<"4 Kilogramos a Libras\n";
        cout<<"5 Salir\n";
        cout<<"Opcion: ";
        cin>>opcion;

        if(cin.fail()) {
            limpiarEntrada();
            continue;
        }

        switch(opcion) {
            case 1:
                cout<<"Celsius: ";
                cin>>valor;
                if(cin.fail()) {
                    limpiarEntrada();
                } else {
                    cout<<"Fahrenheit: "<<celsiusAFahrenheit(valor)<<"\n";
                }
                break;
            case 2:
                cout<<"Fahrenheit: ";
                cin>>valor;
                if(cin.fail()) {
                    limpiarEntrada();
                } else {
                    cout<<"Celsius: "<<fahrenheitACelsius(valor)<<"\n";
                }
                break;
            case 3:
                cout<<"Metros: ";
                cin>>valor;
                if(cin.fail()) {
                    limpiarEntrada();
                } else {
                    cout<<"Pies: "<<metrosAPies(valor)<<"\n";
                }
                break;
            case 4:
                cout<<"Kg: ";
                cin>>valor;
                if(cin.fail()) {
                    limpiarEntrada();
                } else {
                    cout<<"Libras: "<<kilogramosALibras(valor)<<"\n";
                }
                break;
            case 5:
                salir=true;
                break;
            default:
                break;
        }
    }

    return 0;
}
