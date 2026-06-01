#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float L1, L2, L3;
    float S, AREA;

    cout<<"Ingrese lado 1: ";
    cin>>L1;

    cout<<"Ingrese lado 2: ";
    cin>>L2;

    cout<<"Ingrese lado 3: ";
    cin>>L3;

    S = (L1 + L2 + L3) / 2;

    AREA = sqrt(S * (S - L1) * (S - L2) * (S - L3));

    cout<<"Area del triangulo: "<<AREA<<endl;

    return 0;
}
