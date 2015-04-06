//15.-Programa que transforme de decimal a binario (solo del 0 al 9)
#include<stdio.h>

main()
{
  system("clear");
int binario[100], i=0, j=0, x;
printf("dame un numero: \n");
fflush(stdin);
scanf("%d",&x);
printf("Tu número en binario es :");

for(i=100;i>0;i--)
{
binario[i]=x%2;
x=x/2;
}
for(i=1;i<=100;i++)
{
if(binario[i]==1)
{
for(j=i;j<=100;j++)
{
printf("%d",binario[j]);
}
break;
}
}
printf("\n");
}
