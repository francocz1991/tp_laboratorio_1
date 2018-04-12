#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float operandoA;
    float operandoB;
    float resultado;
    int operandoConvertidoA;
    int operandoConvertidoB;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                operandoA = ingresarOperando();
                printf("A: ");
                siEsFloat(operandoA);

                break;

            case 2:
                operandoB = ingresarOperando();
                printf("B: ");
                siEsFloat(operandoB);
                break;

            case 3:
                resultado = sumas(operandoA, operandoB);
                break;

            case 4:
                resultado = restas(operandoA, operandoB);
                break;

            case 5:
                resultado = divisiones(operandoA, operandoB);
                break;

            case 6:
                resultado = multiplicaciones(operandoA, operandoB);
                break;

            case 7:
                resultado = numeroFactorial(operandoA);
                break;

            case 8:
                resultado = todosLosResultados(operandoA, operandoB);
                break;

            case 9:
                seguir = 'n';
                break;

            default:
                printf("ERROR!, ingrese opcion correcta \n\n");
                break;
        }
    }
    return 0;
}
