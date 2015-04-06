//4.-Programa que resuelva ecuaciones de segundo grado

#include<stdio.h>
#include<math.h>
main(){

		int a,b,c,aux;
		float x1,x2,cp;
		
	printf("Resolución de ecuaciones de segundo grado\n\nIngresa los valores en la forma Ax2+Bx+C \n\n");
	scanf("%dx2%dx%d",&a,&b,&c);


aux= (b*b)-4*a*c;

if (aux<0)
{
printf("\n\nLa solucion esta en complejos\n" );
} 
else
{
x1=(-b+(sqrt(aux)))/2*a;
x2=(-b-sqrt(aux))/2*a;

printf("\n\nLa primera solucion de x es: %.2f y la segunda es: %.2f\n\n",x1,x2);
printf("\n Hasta Luego");
}
return 0;
}
