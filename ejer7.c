/*7.-Programa que determine si un cliente de una tienda departamental excede el limite de credito de su cuenta, para cada cliente se disponen de los siguientes datos:
	a)Saldo al inicio de mes
	b)Cuanto gasto
	c)Limite de credito
El programa debe introducir cada uno de estos datos, calcular el nuevo saldo y determinar si excede o no el limite de credito*/
#include<stdio.h>
#define sc scanf
#define p printf
main(){
	int d;
	float s,g,c,e;
ciclo:	p("¿Ingresará datos? 1 -si 0 -no\n");
	sc("%i",&d);
	if(d == 0) goto fin;
	else{
		p("\nSaldo inicial: ");
		sc("%f",&s);
		p("\nCantidad gastada por la persona ");
		sc("%f",&g);
		p("\nLimite de credito ");
		sc("%f",&c);
		e = s + c;
		if( e > g ){ 
			e= e - g,
			p("No exede el credito\n");
			p("El saldo actual es $ %.2f",e);
		}
		if( e < g ){
			p("Exede el credito\n");
		}
		if (d == 1) goto ciclo;
	}

fin: 	p(" ");
}
