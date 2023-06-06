#include <stdio.h>
#include "application/comparacion.h"

int main (){
    int numero1=23;
    int numero2=15;
    int numero3 = -43;
    int temporal=0;
    /*Prueba de función que calcula el mayor de dos números*/
    temporal=numeroMayor(numero1, numero2);
    printf("El mayor de a=%d y b=%d es %d\n", numero1,numero2,temporal);
    /*Prueba de función que calcula mayor de tres números */
    temporal=mayorDeTres(numero1,numero2,numero3);
    printf("El mayor de a=%d,  b=%d y c=%d es %d\n", numero1,numero2,numero3,temporal);   

    /*Prueba de función que calcula el menor de dos números*/
    temporal=numeroMenor(numero1, numero2);
    printf("El menor de a=%d y b=%d es %d\n", numero1,numero2,temporal);
    /*Prueba de función que calcula menor de tres números */
    temporal=menorDeTres(numero1,numero2,numero3);
    printf("El menor de a=%d,  b=%d y c=%d es %d\n", numero1,numero2,numero3,temporal);   
    
    //comparacionDeNumeros(numero1, numero2);
    return 0;
}

