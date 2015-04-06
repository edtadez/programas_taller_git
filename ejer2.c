#include<stdio.h>
int main(){
int num=0;
int i=0;
int aux=0;
int sum=0;
float promedio=0;
printf("Introduzca la cantdad de numeros a evaluar:\n");
scanf("%d",&num);
printf("introduzca los numeros:\n ");

for (i=1;i<=num;i++)
{
scanf("%d",&aux);
promedio=promedio+aux;
}// fin for

promedio=promedio/num;
printf("El promedio de los numeros introducidos es: %f \n",promedio);




}//fin
