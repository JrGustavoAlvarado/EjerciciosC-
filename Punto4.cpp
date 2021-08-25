#include <iostream>

using namespace std;

//Programa que entrega  menor, mayor, medio.
int main(){
int  n1, n2, n3, mayor, menor, medio;

cout<<"Escriba el primer numero:  ";
cin >>n1;

cout <<"Escriba el segundo numero: ";
cin>>n2;

cout <<"Escuche el tercer numero: ";
cin>>n3;

// Condiciones con if ()

if (n1>n2){
 mayor=n1;
 menor=n2;
}

else {
mayor=n2;
menor=n1;  
}

if(mayor>n3){
 if(mayor>n3){
  medio=menor;
  menor=n3;
  }
else{
medio= mayor;
}  
}
else{
 medio=mayor;
 mayor=n3;
}

cout <<"El mayor es:  "<<mayor<<", "<<"El medio es :  "<<medio<<", "<<"El menor es: "<<menor<<"\n";




return 0;
}