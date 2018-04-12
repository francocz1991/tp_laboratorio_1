#include <stdio.h>
#include <stdlib.h>

/** \brief Se pide al usuario que ingrese un operando
 *
 * \return float El operando se guarda y retorna en un float
 *
 */
float ingresarOperando()
{
    float operando;
    printf("Ingrese operando: ");
    scanf("%f",&operando);

    return operando;
}

/** \brief Verifica si se ingreso un float, en caso contrario se mantiene el tipo de variable pero se
 *         eliminan los 0 despues del punto.
 *
 * \param numero float Recibimos un float a verificar
 * \return void Devuelve el float con o sin numeros despues del punto.
 *
 */
void siEsFloat(float numero)
{
    int numeroConvertido;
    numeroConvertido = (int) numero;
    if(numero-numeroConvertido!=0)
    {
        printf("%.2f \n\n", numero);
    }
    else
    {
        printf("%.0f \n\n", numero);
    }
}

/** \brief Suma 2 valores
 *
 * \param numero1 float Primer operando
 * \param numero2 float Segundo operando
 * \return float Se retorna el valor con la verificacion siEsFloat()
 *
 */
float sumas(float numero1, float numero2)
{
    float resultado;
    resultado = numero1+numero2;
    printf("La suma es: ");
    siEsFloat(resultado);
}

/** \brief Resta de 2 valores
 *
 * \param numero1 float Primer operando
 * \param numero2 float Segundo operando
 * \return float Se retorna el valor con la verificacion siEsFloat()
 *
 */
float restas(float numero1, float numero2)
{
    float resultado;
    resultado = numero1-numero2;
    printf("La resta es: ");
    siEsFloat(resultado);
}

/** \brief Divide 2 valores, comprobando que el divisor sea distinto de 0
 *
 * \param dividendo float Primer operando
 * \param divisor float Segundo operando
 * \return float Se retorna el valor con la verificacion siEsFloat()
 *
 */
float divisiones(float dividendo, float divisor)
{
    if(divisor==0)
    {
        printf("ERROR!, no se puede dividir entre cero \n\n");
    }
    else
    {
        float resultado;
        resultado = dividendo/divisor;
        printf("La division es: ");
        siEsFloat(resultado);
    }

}

/** \brief Multiplica 2 numeros
 *
 * \param numero1 float Primer operando
 * \param numero2 float Segundo operando
 * \return float Se retorna el valor con la verificacion siEsFloat()
 *
 */
float multiplicaciones(float numero1, float numero2)
{
    float resultado;
    resultado = numero1*numero2;
    printf("La multiplicacion es: ");
    siEsFloat(resultado);
}

/** \brief Numero factorial del numero ingresado, verificando que sea entero positivo y los resultado de 0 y 1
 *
 * \param numero float Primer operando
 * \return int Retorna un entero por definicion
 *
 */
int numeroFactorial(float numero)
{
    int resultado = 1;
    while(numero<0 || ((numero-(int)numero)!=0))
    {
        printf("ERROR!, reingrese numero entero positivo: ");
        scanf("%f",&numero);
    }

    if(numero == 0)
    {
        printf("El factorial es: %i \n\n",resultado);
    }
    else
    {
        int numero2;
        numero2 = (int) numero;


        while(numero2>0)
        {
            resultado = resultado*numero2;
            numero2--;
        }

        printf("El factorial es: %d \n\n",resultado);
    }

}

/** \brief Suma,resta, division, multiplicacion de 2 operandos, factorial del primer operando
 *
 * \param a float Primer operando
 * \param b float Segundo operando
 * \return int Se retorna el valor con la verificacion siEsFloat()
 *
 */
int todosLosResultados(float a, float b)
{
    sumas(a,b);
    restas(a,b);
    divisiones(a,b);
    multiplicaciones(a,b);
    numeroFactorial(a);
}
