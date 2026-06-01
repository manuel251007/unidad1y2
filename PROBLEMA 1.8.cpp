#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float X1, Y1, X2, Y2;
    float D;

    cout<<"Ingrese X1: ";
    cin>>X1;

    cout<<"Ingrese Y1: ";
    cin>>Y1;

    cout<<"Ingrese X2: ";
    cin>>X2;

    cout<<"Ingrese Y2: ";
    cin>>Y2;

    D = sqrt((X1 - X2)*(X1 - X2) + (Y1 - Y2)*(Y1 - Y2));

    cout<<"Distancia: "<<D<<endl;

    return 0;
}
