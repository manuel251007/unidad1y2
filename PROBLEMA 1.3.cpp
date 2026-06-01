#include <iostream>
using namespace std;

int main() {

    string NOM;
    float PES, LON, KILOS, METROS;

    cout<<"Nombre del dinosaurio: ";
    cin>>NOM;

    cout<<"Peso en libras: ";
    cin>>PES;

    cout<<"Longitud en pies: ";
    cin>>LON;

    KILOS = PES * 0.453592;
    METROS = LON * 0.3047;

    cout<<"Nombre: "<<NOM<<endl;
    cout<<"Peso en kilogramos: "<<KILOS<<endl;
    cout<<"Longitud en metros: "<<METROS<<endl;

    return 0;
}
