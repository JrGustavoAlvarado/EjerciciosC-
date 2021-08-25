#include <iostream>

using namespace std;
// Un obrero necesita calcular su salario semanal, el cual se obtiene de la siguiente manera: Si trabaja 
//40 horas o menos se le paga un salario de $1000 por hora, si trabaja más de 40 horas 
//se le paga un salario de $1000 por cada una de las primeras 40 horas y un salario de $2000 por cada hora extra.


int main (){
    int Ht, He, Ss;

    cout <<"Ingrese las horas trabajadas"<<endl;
    cin >>Ht;

    if(Ht>40){
      He=Ht-40;
      Ss=Ht*1000+40*2000; 
    }
else{
    Ss=Ht*1000;
}
cout<<"El salario semanal es: "<<Ss;
return 0;
}