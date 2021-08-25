#include <iostream>
using namespace std;

/* Un supermercado ha puesto en oferta la venta al por mayor de cierto producto, ofreciendo un descuento del 20%
 por la compra de más de 5 docenas y 10% en caso contrario. Además, por la compra de más de 5 docenas se obsequia 
 una unidad del producto por cada docena en exceso sobre 5. Diseñe un algoritmo que determine el monto de la compra,
el monto del descuento, el monto a pagar y el número de unidades de obsequio por la compra de cierta cantidad de docenas del producto.
 No olvide ingresar el valor de la docena y las docenas.*/

int main(){
float Descuento, total, precio, obsequio;

cout <<"¿Cuantas docenas del producto compraste?:  ";
cin >>precio;


if (precio>=100){
    Descuento=precio*0.2;
    total=precio-Descuento;
}

if(Descuento>=20){
    Descuento=precio-0.2;
    total=precio-Descuento;
}
else {
    total=precio;
}

cout<<"El total a pagar en los productos: "<<total<<endl;
cout<<"El descuento en los productos es de: "<<Descuento<< endl;
cout<<"El obsequio en los productos es de: "<<obsequio<<endl;

return 0;
}