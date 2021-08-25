#include <iostream>

using namespace std;

/*Un hombre desea saber cuánto dinero se genera por concepto de intereses sobre la cantidad que tiene en inversión en el banco. 
El decidirá reinvertir los intereses siempre y cuando estos excedan a $7000, y en ese caso desea saber cuánto dinero tendrá finalmente 
en su cuenta.*/

int main(){
    double  ganancia, interes, capitalInver, capitalFinal;

    cout<<"Ingrese su capital invertido; "<<endl;
    cin>>capitalInver;

    interes=0.20;

    ganancia = capitalInver*interes;
    if(ganancia>7000){

        capitalFinal = capitalInver + ganancia;
        cout<<"Su capital final: "<<capitalFinal<<endl;


    }
    else{
        capitalFinal = capitalInver;
        cout<<"Su capital final: "<<capitalFinal<<endl;
    }



 return 0;
}