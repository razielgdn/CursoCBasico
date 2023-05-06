/**
 * La funcion mayor retorna el mayor de dos números
 **/

int numeroMayor(int primero, int segundo){
    int mayor=0;
    
    if (primero > segundo)
    {
        mayor=primero;
    } 
    else
    {
        mayor=segundo;
    }
    return mayor;
    
}
int MayorDeTres(int numA, int numB, int numC){
    int mayor=0;
    if (numA >numB ){
        mayor=numA;
    }
    else 
    {
        if (numB > numC)
        {    
            mayor= numB; 
        }
        else
        {   
            mayor=numC;
        }
    }
    return mayor;   
}