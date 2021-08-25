#include <iostream>
using namespace std;
//Escribir un programa que, ingresada una calificación entre del 1 al 5, muestre alguno de
//los siguientes mensajes: 
//Si la Calificación esta entre de 0.0 y 2.9 mostrar “REPROBADO”
//Si la Calificación esta entre de 3.0 y 3.5 mostrar “REGULAR”
//Si la Calificación esta entre 3.6 y 4.0 mostrar “BUENO”
//Si la Calificación esta entre 4.1 y 4.5 mostrar “MUY BUENO”
//Si la Calificación esta entre 4.6 y 5.0 mostrar “EXCELENTE”

int main(){
int cal; 
cout<<"Ingrese su calificación" ;
cin>>cal; 

if(cal<=2.9){
 cout<<"No aprobo";
 }else if (cal==3.0){
 cout<<"Regular";
 }else if (cal==3.5){
  cout<<"Regular";
 }else if(cal==3.6){
  cout<<"Bueno";
 }else if(cal==4.0){
  cout<<"Bueno";
 }else if(cal==4.1){
  cout<<"Muy bueno";
}else if(cal==4.5){
 cout<<"Muy bueno";
}else if (cal==4.6){
cout<<"Excelente"; 
}else if (cal==5.0){
 cout <<"Excelente";
}
return 0;


}




