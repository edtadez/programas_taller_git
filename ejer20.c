//20.-Programa que lea un entero y calcule su factorial
#include<stdio.h>
main(){
int n,i,m=1;
	printf("Ingresa un numero para obtener su factorial\n\t");
	scanf("%i",&n);
	for(i=2;i<=n;i++) m*=i;
	printf("el factorial es %i \n",m);
}
