//#6.-Programa que sume y reste matrices de 2 x 2
#include<stdio.h>


int main () {

int matriz_a [2][2];
int matriz_b [2][2];
int i=0;
int j=0;

system("clear");
printf("introdusca la matriz A\n");


for(i=0;i<2;i++)

{
for (j=0;j<2;j++){
printf("elemento (%d)(%d)\n",i+1,j+1);
scanf("%d",& matriz_a[i][j]);
}
}

system("clear");
printf("introdusca la matriz B\n");

i=0;
j=0;
for(i=0;i<2;i++)
 
{ 
for (j=0;j<2;j++){
printf("elemento (%d)(%d)\n",i+1,j+1);
scanf("%d",& matriz_b[i][j]);
}
}


printf("presione 1 para sumar y 2 para restar\n");
int opc=0;
i=0;
j=0;
scanf("%d",&opc);
switch (opc){

case 1: system("clear");
   printf("la suma es:\n");

for(i=0;i<2;i++)
 
{ 
for (j=0;j<2;j++){
printf("elemento (%d),(%d) = (%d)\n",i+1,j+1,matriz_a[i][j]+matriz_b[i][j]);
}
}
break;


case 2: system("clear");
   printf("la resta es:\n");

for(i=0;i<2;i++)
  
{ 
for (j=0;j<2;j++){
printf("elemento(%d),(%d) = (%d)\n",i+1,j+1,matriz_a[i][j]-matriz_b[i][j]);
}
}
break;
default: printf("Opcion no valida");
}
}//fin main
