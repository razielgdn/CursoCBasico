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