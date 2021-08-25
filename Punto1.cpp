#include <iostream>

//Crear un programa que muestre por pantalla el mensaje de “Aprobado” cuando una
//calificación mayor a 3 
using namespace std;

int main(){

double  Calificacion1, Calificacion2, Calificacion3, promedio;

cout <<"Ingrese la primera calificación"<<endl;
cin>>Calificacion1;


promedio=(Calificacion1 +Calificacion2 + Calificacion3+ promedio)/3;

if(promedio>=3.0){
 cout <<"El alumno aprueba la materia con: "<<promedio<<endl;
}

else {
    cout<<"El alumno aprobo la materia con 3"<<endl;
    }

return 0;

}