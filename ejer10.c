#include<stdio.h>
#include<stdlib.h>
int main(){
int lista[20];
int i=0;
int j=0;
int aux=0;
printf("ingrese 20 números al azar para ordenarlos posteriormete\n");
for(i=0; i<=19;i++){
scanf("%d",&lista[i]);




}// fin for 2
for(j=0;j<=19;j++){
for (i=j+1;i<=19;i++){

if (lista[i]<lista[j]){

aux=lista[j];
lista[j]=lista[i];
lista[i]=aux;
}


}


}// fin for1

for(i=0;i<=19;i++){

printf("%d,",lista[i]);

}
}// fin main
