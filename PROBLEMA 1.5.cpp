#include <iostream>
using namespace std;

int main(){

    float RADIO, ALTU;
    float VOL, AREA;

    cout<<"Ingrese radio: ";
    cin>>RADIO;

    cout<<"Ingrese altura: ";
    cin>>ALTU;

    VOL = 3.1416 * RADIO * RADIO * ALTU;
    AREA = 2 * 3.1416 * RADIO * (RADIO + ALTU);

    cout<<"Volumen: "<<VOL<<endl;
    cout<<"Area: "<<AREA<<endl;

    return 0;
}
