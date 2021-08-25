#include <iostream>

using namespace std;

/*Determinar con un mensaje en pantalla si un alumno aprueba o reprueba un curso,
 sabiendo que aprobara si su promedio de tres calificaciones es mayor o igual a 3.0; 
reprueba en caso contrario. (ingresar las tres calificaciones que deben estar entre 0.0 y 5.0). */

int main(){
double calif1, calif2, calif3, promedio;

cout <<"Ingrese la primera calificación"<<endl;
cin>>calif1;

cout <<"Ingrese la segunda  calificación"<<endl;
cin>>calif2;

cout <<"Ingrese la tercera calificación"<<endl;
cin>>calif3;

promedio=(calif1+calif2+calif3)/3;

if(promedio>=3.0){
 cout <<"El alumno aprueba la materia con: "<<promedio<<endl;
}

else{
    cout <<"El alumno reprobo la materia con: "<<promedio<<endl;
}

 return 0;   
}

