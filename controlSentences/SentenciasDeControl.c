#include <stdio.h>
#include "application/comparacion.h"

int main (){
    int numero1=23;
    int numero2=15;
    int temporal=0;
    temporal=numeroMayor(numero1, numero2);

    printf("El mayor de a=%d y b=%d es %d\n ", numero1,numero2,temporal);

    return 0;
}

