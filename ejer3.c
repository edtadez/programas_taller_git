#include<stdio.h>
#include<stdlib.h> 
int main (){
int voto=0;
int votantes=0;
int i=0;
int can1=0;
int can2=0;
int can3=0;
int can4=0;
system("clear");

printf("Bienvenido al sistema de votación\n");
printf("Ingrese el total de votantes\n");
scanf("%d",&votantes);
system("clear");


for (i=1;i<=votantes;i++){
voto=0;
system("clear");
printf("votante número : %d ",i);
printf("Porfavor ingrese la opción que indica su elección.\n");
printf("\n 1.El jeringas 2.Don Rata 3.El Checheco 4.Abstinencia\n");
scanf("%d",&voto);

switch (voto){

case 1: can1=can1+1;
	break;
case 2: can2=can2+1;
	break;
case 3: can3=can3+1;
	break;
case 4: can4=can4+1;
	break;


}//fin switch


}// fin for

system("clear");
printf("A continuación se presentan los porcentajes  obtenidos\n");
printf("El jeringas:  %d\n",can1*100/votantes);
printf("Don Rata: %d\n",can2*100/votantes);
printf("El checheco: %d\n",can3*100/votantes);
printf("Abstinencia: %d\n",can4*100/votantes);

}// fin main
