#include<iostream>

using namespace std;

int main ()
{
    int contrasena,x=456;
    do{
        cout << "Usuario: Admin \n\n Password: ";
        cin >> contrasena;

        if(contrasena!=x)
        cout << "Contrasena Incorrecta"<<endl;

    }while(contrasena!=x);
    cout<<"Contrasena Correcta"<<endl;

    return 0;
}
