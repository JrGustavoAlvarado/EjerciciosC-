#include <iostream>
#include <math.h>

using namespace std;

/*Crear un algoritmo que permita ingresar el valor de una venta, si la venta es mayor a $ 250000 pesos de debe calcular el IVA de 19%,
 en caso contrario debe calcular el IVA del 10%, en los dos casos de mostrar el total a pagar por el cliente.*/

int main (){

    float precio, Iva, precioFinal;

    cout<<"Digite el precio del producto:  "<<endl;
    cin>>precio;

    Iva = precio * 19;
    precioFinal = precio + Iva;

    cout <<"El precio total del Iva es de: "<<Iva<<endl;
    cout <<"El precio final del producto es de: "<<precioFinal<<endl;

    if(Iva >= 19 && Iva <=19){
    cout<<"Este producto no esta extento del Iva"<<endl;
    }
    else{
    cout <<"Este producto incluye el Iva"<<endl;
    }

    return 0;
}


