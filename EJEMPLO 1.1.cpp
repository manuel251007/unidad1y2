#include <iostream>
using namespace std;

int main(){

    float BASE,ALTU,SUP,PER;

    cout<<"Base: ";
    cin>>BASE;

    cout<<"Altura: ";
    cin>>ALTU;

    SUP=BASE*ALTU;
    PER=2*(BASE+ALTU);

    cout<<"Superficie: "<<SUP<<endl;
    cout<<"Perimetro: "<<PER;

    return 0;
}
