#include <iostream>

using namespace std;

// Algortimo del parqueadero
/*Si el cliente realiza compras por encima de $50.000 pesos COP el parqueadero es gratis*/

int main()
{
int Carro, Hora, fecha;
float x, a=5, b, c=8, d=12, e=15, f=18, g, h, i, j, k, l, m=100, o, p, q, r, s, n=5000, compras=0;
cout<<"Bienvenido al parqueadero Arboleda"<<endl;
cout<< "Ingrese la fecha"<<endl;
cin>>fecha;
cout <<"Que carro vas a ingresar"<<endl;
cout <<"1. Carro"<<endl;
cout <<"2. Moto"<< endl;
cout <<"3. Monopatin"<<endl;
cout <<"4. Bicicleta"<<endl;
cin >>Carro;

switch(Carro){
case 1:
     cout<<"el segundo a pagar es de 60 pesos"<<endl;
     cout<<"Hora de salida"<<endl;
     cin >>x;
     cout <<"duro"<<x-Hora<<" horas adentro"<<endl;
b=x-Hora;
g=b*n*a;
h=b*n*c;
i=b*n*d;
j=b*n*e;
k=b*n*f;
       cout <<"Ingrese el valor de sus compras"<<endl;
       cin>>compras;
       
       if(compras>=50000){
           cout << "Su parqueadero es gratis";break;
       }
       else{
           cout <<"Su total a pagar es de: "<<g<<endl;
           cout <<"El iva agravado de su pago es: "<<g*l/m<<endl;
           o=g+(g*l/m);
           cout <<"El valor total del iva es de: "<<o;break;
       }
       case 2:
         cout <<"El segundo a pagar es de 10 pesos"<<endl;
         cout <<"Hora de su salida"<<endl;
         cin >>x;
         cout<<"Duración"<<x<<-Hora<<"Horas adentro"<<endl;
         b=x-Hora;
g=b*n*a;
h=b*n*c;
i=b*n*d;
j=b*n*e;
k=b*n*f;
       cout<<"Ingrese el valor de sus compras"<<endl;
       cin>>compras;

       if(compras>=50000){
           cout<<"Su parqueadero es gratis";break;
       }
       else{
       cout<<"Su total a pagar es:"<<h<<endl;
       cout<<"El IVA agregado es de: "<<h*l/m<<endl;
       p=h+(h*l/m);
       cout<<"El valor total con iva es de: "<<p;break;
       }
       case 3:
       cout<<"El segundo a pagar es de 15 pesos"<<endl;
       cout<<"Hora de salida"<<endl;
       cin>>c;
       cout<<"Duración "<<x-Hora<<" Horas en servicio"<<endl;
       b=x-Hora;
g=b*n*a;
h=b*n*c;
i=b*n*d;
j=b*n*e;
k=b*n*f;
    cout<<"Ingrese el valor de su compra"<<endl;
    cin>>compras;

    if(compras>=50000){
        cout<<"Ingrese el valor de sus compras";break;
    }
    else {
    cout <<"Su total a apagar es:"<<h<<endl;
    cout <<"El iva agregado es  de: "<<h*l/m<<endl;
    q=i+(i*l/m);
    cout<<"El valor total con iva es de: "<<q;break;
}
    case 4:
    cout <<"El segundo a pagar es de 15 pesos"<<endl;
    cout <<"Hora de salida"<<endl;
    cin>>x;
    cout<<"Duración"<<x-Hora<<"Horas adentro"<<endl;
b=x-Hora;
g=b*n*a;
h=b*n*c;
i=b*n*d;
j=b*n*e;
k=b*n*f;
   cout<<"Ingrese el valor de sus compras"<<endl;
   cin >>compras;

   if(compras>=50000){
       cout<<"Su parqueadero es gratis";break;
   }
   else {
       cout<<"Su total a pagar seria:"<<j<<endl;
       cout<<"El iva agregado es de: "<<j*l/m<<endl;
       r=j+(j*l/m);
       cout<<"El valor del parqueadero total con iva es de: "<<s;break;
   }

   }
}