//Headers - Encabezados
#include <stdio.h>

// Macros 
// Global variables - Variables Globales
// Function prototypes - prototipos de función
// Main function - Función principal

int main (){
	// Variables locales
	//Enteros con signo:
	int entero=0;
	//Enteros sin signo:
	unsigned int enteroSinSigno=0;
	//Caracter:
	char caracter;
	//Cadena de caracteres:
	char cadena[80]="Esta es una cadena de caracteres";
	//Punto Flotante
	float flotante =0.0;
	//Doble punto flotante
	double flotanteDoble=0.0;

	printf("Las computadoras son maquinas que tienen entradas y salidas\n -La principal entrada es el teclado\n -La principal salida es la pantalla\n -Printf es la funciona para controlar la pantalla en C\n -Scanf es la funcion para leer cosas del teclado en C\n");
	printf ("printf(\" Esta es una funcion de salida de datos \"):\n");
	printf("Para imprimir enteros se usa el operador: %%\npor ejemplo:\n");	
	printf("Para escribir un entero se utiliza:\nprintf(\"entero=%%d\", entero);\n");	
	entero=-1037;
	printf("entero = %d\n", entero);
	entero=1582;
	printf("entero = %d\n", entero);
	printf("Para escribir un entero sin signo se utiliza:\nprintf(\"enteroSinSigno=%%d, enteroSinSigno\")\n");
	enteroSinSigno=31437;
	printf("entero = %d\n", enteroSinSigno);
	enteroSinSigno=36;
	printf("entero = %d\n", enteroSinSigno);
	printf("Para escribir un caracter sin signo se utiliza:\nprintf(\"caracter=%%c, caracter\")\n");
	caracter='A';
	printf("caracter = %c\n", caracter);
	caracter='l';
	printf("caracter = %c\n", caracter);
	printf("Para escribir una cadena utiliza:\nprintf(\"cadena=%%s, cadena\")\n");	
	printf("cadena = %s\n", cadena);
	printf("Para escribir un numero flotante se utiliza:\nprintf(\"flotante=%%f\",flotante);\n");	
	flotante=4.56;
	printf("flotante = %f\n", flotante);
	flotante=246.58701;
	printf("flotante = %f\n", flotante);
	printf("Para escribir un numero flotante de tamaño doble se utiliza:\nprintf(\"flotanteDoble=%%lf\",flotanteDoble);\n");	
	flotanteDoble=-56894.5634;
	printf("flotanteDoble = %f\n", flotanteDoble);
	flotanteDoble=24466.5855555701;
	printf("flotanteDoble = %lf\n", flotanteDoble);

	printf ("\n"); 


	return 0;
}
// Functions - Funciones 







