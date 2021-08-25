#include <iostream>
//Escribir un programa que, ingresada una calificación del 1 al 5, muestre por pantalla los
//siguientes mensajes:
//Si la calificación es mayor a 3 muestre “APROBADO” de lo contrario mostrar
//“REPROBADO”

using namespace std;
int main (){

double calif1, calif2, calif3, calif4, calif5, promedio;

cout <<"Ingrese la primera calificación"<<endl;
cin>>calif1;

promedio=(calif1+calif2+calif3+calif4+calif5);

if(promedio>=3.0){
 cout <<"El alumno aprueba la materia con:   "<<promedio<<endl;
}

else {
    cout<<"El alumno reprobo  la materia con:  "<<promedio<<endl;
}

return 0;

}