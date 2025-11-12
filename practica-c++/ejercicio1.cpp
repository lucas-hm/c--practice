#include <iostream>
using namespace std;

int main(){
    int opcion;
    cout << "Bienvenido a la simulacion de banco" << endl;

    cout << "1. ingresar numero de cuenta" << endl;
    cout << "2. ver saldo de cuenta" << endl;
    cout << "3. ingresar nuevo saldo" << endl;
    cout << "4. retirar dinero" << endl;

    cout << "Ingresa una opcion: ";
    cin >> opcion;

    switch(opcion){
        case 1:
            cout << "ingresar numero de cuenta" << endl;
            break;
        case 2:
            cout << "ver saldo de cuenta" << endl;
            break;
        case 3:
            cout << "ingresar nuevo saldo" << endl;
            break;
        case 4:
            cout << "retirar dinero" << endl;
            break;
    }
    return 0;
}