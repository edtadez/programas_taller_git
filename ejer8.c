//8.-Los vendedores de una tienda reciben su paga por medio de comisiones reciben $200 semanales mas el 9% de sus ventas totales durante la semana. Desarrollar un programa que 
//introduzca 
//las ventas totales de cada vendedor durante el mes y calcule los ingresos de ese vendedor.


#include<stdio.h>
float main(){
float sem1=0;
float sem2=0;
float sem3=0;
float sem4=0;
float ingreso=0;
system("clear");

printf("introduce tus ventas de la semana 1: \n");
scanf("%f",&sem1);
printf("introduce tus ventas de la semana 2: \n");
scanf("%f",&sem2);
printf("introduce tus ventas de la semana 3: \n");
scanf("%f",&sem3);
printf("introduce tus ventas de la semana 4: \n");
scanf("%f",&sem4);

system("clear");
ingreso=800+(sem1*9/100)+(sem2*9/100)+(sem3*9/100)+(sem4*9/100);
printf("Tu ingreso mensual es: %f \n",ingreso);
















}// fin main
