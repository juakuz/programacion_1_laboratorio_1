#include <stdio.h>
#include <stdlib.h>
int factorial (int);


int main()

{
    int valor = 10;
    int factorial = 1;

    return 0;





}
int factorial(int numero)
{
    int retorno;
    if (numero==0)
    {
        retorno = 1;
    }
    else
    {
        retorno=numero * factorial(numero - 1);



    }
    return retorno;

    printf("El factorial de: %d", &factorial);
    scanf("%d",&factorial);

}



