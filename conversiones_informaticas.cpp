#include <iostream>

using namespace std;

float bitsABytes(float bits) {
    return bits / 8;
}

float kilobytesABytes(float kb) {
    return kb * 1024;
}

float megabytesAKilobytes(float mb) {
    return mb * 1024;
}

float gigabytesAMegabytes(float gb) {
    return gb * 1024;
}

int main() {
    int opcion;
    float valor;

    while(true) {
        cout<<"1 Bits a Bytes\n";
        cout<<"2 Kilobytes a Bytes\n";
        cout<<"3 Megabytes a Kilobytes\n";
        cout<<"4 Gigabytes a Megabytes\n";
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
                cout<<"Bits: ";
                cin>>valor;
                cout<<"Bytes: "<<bitsABytes(valor)<<"\n";
                break;
            case 2:
                cout<<"Kilobytes: ";
                cin>>valor;
                cout<<"Bytes: "<<kilobytesABytes(valor)<<"\n";
                break;
            case 3:
                cout<<"Megabytes: ";
                cin>>valor;
                cout<<"Kilobytes: "<<megabytesAKilobytes(valor)<<"\n";
                break;
            case 4:
                cout<<"Gigabytes: ";
                cin>>valor;
                cout<<"Megabytes: "<<gigabytesAMegabytes(valor)<<"\n";
                break;
            case 5:
                return 0;
            default:
                break;
        }
    }

    return 0;
}
