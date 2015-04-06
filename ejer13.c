/*Simon Dice,la pantalla muestra aleatoriamente numeros del 1 al 9 y el usuario tiene que escribir el numero que aparece para continuar.*/
#include<stdio.h>
#include<time.h>
#define s scanf
#define p printf
main(){
	int d,comp;

ciclo:	p("Simon dice: \n\t\t");

	srand (time(NULL));
	comp = rand()%10;
	p("%i \n\t\t",comp);
	
	s("%i",&d);

	if (d == comp) goto ciclo;
	
	p("Perdiste \n\t\t");	

}
