#include <iostream>
#include <studio.h>
#include <math.h>
int edad = 0;
float valor1 = 0;
float valor2 = 0;
float resultado = 0;

void main()
{
    suma();
	resta();
	multiplicacion();
	division();
    printf("Calculadora")
}

float suma(){
   resultado =  valor1 + valor2
    return resultado;
    printf("El resultado es " , resultado);
}

float resta(){
    resultado =  valor1 - valor2
    return resultado;
    printf("El resultado es " , resultado);
}

float multiplicacion(){
    resultado =  valor1 * valor2
    return resultado;
    printf("El resultado es " , resultado);
}

float division(){
    resultado =  valor1 / valor2
    return resultado;
    printf("El resultado es " , resultado);
}