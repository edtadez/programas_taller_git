//17.-Programa que te diga cuanto tiempo tarda en contar tu computadora del 1 al 4,000,000,000
#include<stdio.h>
#include<time.h>
#define p printf
main(){
int i;
double inicio;
inicio = clock();
for(i=0;i=4000000000;i++);
p("tiempo: %f",(inicio - clock())/1000);
}
