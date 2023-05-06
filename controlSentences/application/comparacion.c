/**
 * La funcion mayor retorna el mayor de dos números
 **/

int numeroMayor(int primero, int segundo)
{
    int mayor = 0;
    
    if (primero > segundo)
    {
        mayor = primero;
    } 
    else
    {
        mayor = segundo;
    }
    return mayor;
    
}
int MayorDeTres(int numA, int numB, int numC)
{
    int mayor=0;
    if (numA > numB ){
        mayor=numA;
    }
    else 
    {
        if (numB > numC)
        {    
            mayor = numB; 
        }
        else
        {   
            mayor = numC;
        }
    }
    return mayor;   
}

int numeroMenor(int primero, int segundo)
{
    int menor=0;
    
    if (primero < segundo)
    {
        menor=primero;
    } 
    else
    {
        menor=segundo;
    }
    return menor;
    
}
int menorDeTres(int numA, int numB, int numC)
{
    int menor=0;
    if (numA < numB ){
        menor=numA;
    }
    else 
    {
        if (numB < numC)
        {    
            menor= numB; 
        }
        else
        {   
            menor=numC;
        }
    }
    return menor;   
}
/** Esta funcion toma como parámetros dos números enteros y regresa un número positivo si el primer numero (numA)
 * es mayor que el segundo (numB), asi mismo regresa un 0 si son iguales y un número negativo si es menor. 
 * En la práctica es la mejor forma de comparación cuando se utilizan algoritmos de ordenación. 
*/
int comparacionDeNumeros(int numA, int numB)
{
    return numA - numB;
}
