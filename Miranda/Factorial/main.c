#include "conio.h"
#include <stdio.h>
#include <dos.h>


main()
{

int numero;
int contador=1;
int total=1;

printf("Dame el numero para el factorial: ");
scanf("%d",&numero);
while(contador<=numero)
{
 total = total * contador;
 contador++;
}
 printf("El factorial de %d es: %d",numero,total);



getch();
return 0;
}
