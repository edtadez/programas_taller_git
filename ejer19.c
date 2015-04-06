//19.-Programa que lea tres enteros diferentes de cero y que determine si pueden representar los lados de un triangulo recto
#include<stdio.h>
#include<math.h>
#define s scanf
#define p printf
main(){
	int a,b,c,t,d,e;
	p("\tIngresa 3 longitudes distintas de cero para determinar si es posible formar un triángulo recto\n\tLado A: ");
	s("%i",&a);
	p("\n\tLado B: ");
	s("%i",&b);
	p("\n\tLado C: ");
	s("%i",&c);

	t=a;
	d=b;
	e=c;
	if(t<b){ t=b; d=a; e=c; }
	if(t<c){ t=c; d=a; e=b; }
	t= t*t;
	d= d*d;
	e= e*e;
	if(t == (d + e)) p("Es un triangulo recto");
	else p("No es un triangulo recto"); 
}
