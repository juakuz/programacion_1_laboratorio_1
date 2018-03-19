#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    /*int (%d)--float (%f) --char (%c)*/


    int numero1;
    float numero2;
    float suma;
    char letra;

    printf("ingrese el primer numero: \a");
    scanf("%d",&numero1);
    printf("ingrese el segundo numero: \a");
    scanf("%f", &numero2);
    printf("ingrese la letra: \a");

    letra = tolower(getche());

    suma = numero1 + numero2;

    printf("\nEl numero es: %d \nSegundo numero es: %f \n\a", numero1, numero2);
    printf ("Los numeros sumados dan: %.1f\n", suma);
    printf ("La letra ingresada es: %c", letra);
    return 0;
}
