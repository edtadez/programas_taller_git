#include <stdio.h>
int main (){
int cal =0;
printf("Introduce tu calificación final del curso :\n");
scanf("%i",&cal);
if (cal>5)
{
	
if ((cal>=6)&&(cal<8)){printf("Estas apobado.\n");}
if (cal >=8){printf("Estas exento, eres bien matado :P\n");}

}
	if (cal==0){printf("Tienes Np.\n");}
	if ((cal<=5)&&(cal>0)){printf("estas reprobado.\n");}



}// fin
