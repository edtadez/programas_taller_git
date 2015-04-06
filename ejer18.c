//18.-Programa lea el radio de un circulo y que calcule el area y perimetro 
#include<stdio.h>
#include<time.h>
#define s scanf
#define p printf
#define pi 3.14159
main(){
	float r;
	system("clear");
	p("Ingresa el radio del circulo\n\t");
	s("%f",&r);

	p("Area del circulo: %.4f \n\t",pi*r*r);
	p("Perimetro del circulo: %.4f \n",pi*2*r);
}
