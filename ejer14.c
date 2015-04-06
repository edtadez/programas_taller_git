//14.-Programa que reciba un numero y 
//muestre todos los submultiplos de 
//este 
//(ej. 10: 10,5,2,1)
#include <stdio.h>

int main() {
int num=0;
int i=0;
system("clear");
printf("Introduce un número entero:\n");
scanf("%d",&num);

for(i=1;i<=num;i++){
if (num % i== 0){

printf("submultiplo: %d\n",i);

}//fin if

}//fin for

}// fin main
