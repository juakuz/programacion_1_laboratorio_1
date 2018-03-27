#include <stdio.h>
#include <stdlib.h>


int main()
{
    char seguir='s';
    int numero;
    int contpares = 0;
    int contnumeros = 0;
    int acumulador = 0;
    float promedio;
    int min;
    int max;
    int flag=0;




    while(seguir=='s')
    {
        printf("\n Ingrese un numero: ");
        scanf("%d", &numero);


       while (numero<=0)
       {

           printf("\a\n Reingrese el numero: ");
           scanf("%d", &numero);

       }

        if(numero%2==0)
            {
                contpares++;
            }

            contnumeros++;
            acumulador+= numero;


            /*if(flag==0)
            {
                max=numero;
                min= numero;
                flag=1;

             }
             else
             {
                 if(numero>max)
                 {
                     max=numero;
                 }
                 if(numero<min)
                 {
                     min= numero;
                 }
             }*/


            if(flag== 0 || numero > max)
            {
                max = numero;
                flag = 1;
            }

            if(flag == 0 || numero < min)
            {
                min = numero;
                flag = 1;
            }




        printf("\n desea continuar? ");
        seguir=getche();

    }

    promedio = (float)acumulador/contnumeros;

    printf("\n El promedio es: %f",promedio);
    printf("\n La cantidad de numeros son: %d", contnumeros);
    printf("\n cantidad de numeros pares: %d", contpares);
    printf("\n el maximo es: %d Y el minimo es: %d",max , min);
    return 0;
}
