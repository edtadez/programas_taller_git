//11.-Programa que simule un sistema de loggeo

#include <stdio.h>
#include <string.h>

main(){
	char u[10],c[10];

	printf("\nBienvendo al sistema\n Ingresa tu usuario: (si no tienes, usa 'default' contrasena 'chaneque123')");
	scanf("%s",&u);
	switch(strcmp(u,"default")){
		case 0:
			printf("\nIngresa contrasena:\n");
			scanf("%s",&c);
			if(strcmp(c,"chaneque123") == 0)
					printf("\nLogueo exitoso \n");
			else
				printf("\nContrasena inconrecta\n");
		break;
		
		default:
			printf("\nUsuario Incorrecto\n");
	}
}
