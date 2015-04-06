//16.-Programa que lea un numero entero 
//y que determine cuantos numeros del 
//entero son 7's

#include <stdio.h>

int main (){
int n=0;
int cont=0;
int mod=0;
system ("clear");
printf("Ingrese un número entero: \n");
scanf("%d",&n);
do {

mod= n % 10;
if(mod==7){cont++;}
n=n/10;


}while (mod != 0);
printf("Tu número tiene una cantidad de %d sietes.\n",cont);
}

// fin main
