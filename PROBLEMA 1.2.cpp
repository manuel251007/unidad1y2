#include <iostream>
using namespace std;

int main() {

    float PREPRO, PAGO, CAMBIO;

    cout<<"Ingrese precio del producto: ";
    cin>>PREPRO;

    cout<<"Ingrese pago del cliente: ";
    cin>>PAGO;

    CAMBIO = PAGO - PREPRO;

    cout<<"Cambio: "<<CAMBIO;

    return 0;
}
