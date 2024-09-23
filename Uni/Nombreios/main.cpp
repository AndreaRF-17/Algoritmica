#include <iostream>

using namespace std;

int main()
{
    char nombre[20], apellido[20];
    cout << "Introducir su nombre: ";
    cin >> nombre;

    cout << "Introducir su apellido: ";
    cin >> apellido;

    cout << "Hola " << nombre << " " << apellido << endl;

    return 0;
}
