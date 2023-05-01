//Headers - Encabezados
#include <stdio.h>

// Macros 
// Global variables - Variables Globales
int suma=0;
int resta=0;
float division=0;
int multiplicacion;
char letra='a';

// Function prototypes - prototipos de función
int funcionSuma(int num1, int num2);
int funcionResta(int num1, int num2);
int funcionMultiplicacion(int num1, int num2);
float funcionDivision(int num1,int num2);
char siguienteCaracter(char letra);
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
	int numUno=06;
	int numDos=07;
	printf("Las computadoras son maquinas que tienen entradas y salidas\n -La principal entrada es el teclado\n -La principal salida es la pantalla\n -Printf es la funciona para controlar la pantalla en C\n -Scanf es la funcion para leer cosas del teclado en C\n");
	printf ("printf(\" Esta es una funcion de salida de datos \"):\n");
	printf("---------------------------------------------------------------------\n\n");

	printf("Para imprimir enteros se usa el operador: %%\npor ejemplo:\n");	
	printf("Para escribir un entero se utiliza:\nprintf(\"entero=%%d\", entero);\n");	
	entero=-1037;
	printf("entero = %d\n", entero);
	entero=1582;
	printf("entero = %d\n", entero);
	printf("---------------------------------------------------------------------\n\n");
	printf("Para escribir un entero sin signo se utiliza:\nprintf(\"enteroSinSigno=%%d, enteroSinSigno\")\n");
	enteroSinSigno=31437;
	printf("entero = %d\n", enteroSinSigno);
	enteroSinSigno=36;
	printf("entero = %d\n", enteroSinSigno);
	printf("---------------------------------------------------------------------\n\n");
	printf("Para escribir un caracter sin signo se utiliza:\nprintf(\"caracter=%%c, caracter\")\n");
	caracter='A';
	printf("caracter = %c\n", caracter);
	caracter='l';
	printf("caracter = %c\n", caracter);
	printf("---------------------------------------------------------------------\n\n");
	printf("Para escribir una cadena utiliza:\nprintf(\"cadena=%%s, cadena\")\n");	
	printf("cadena = %s\n", cadena);
	printf("---------------------------------------------------------------------\n\n");

	printf("Para escribir un numero flotante se utiliza:\nprintf(\"flotante=%%f\",flotante);\n");	
	flotante=4.56;
	printf("flotante = %f\n", flotante);
	flotante=246.58701;
	printf("flotante = %f\n", flotante);
	printf("---------------------------------------------------------------------\n\n");

	printf("Para escribir un numero flotante de tamaño doble se utiliza:\nprintf(\"flotanteDoble=%%lf\",flotanteDoble);\n");	
	flotanteDoble=-56894.5634;
	printf("flotanteDoble = %f\n", flotanteDoble);
	flotanteDoble=24466.5855555701;
	printf("flotanteDoble = %lf\n", flotanteDoble);
	printf("---------------------------------------------------------------------\n\n");	

	printf ("En la proxima seccion se utilizara la funcion scanf que permite tomar valores del declado\n");		
	printf("->Introduce un Caracter: ");
	scanf("%c", &letra);	
	caracter=siguienteCaracter(letra);	
	printf("->El siguiente caracter despues de '%c' es: '%c'\n \n",letra, caracter);
	printf("---------------------------------------------------------------------\n\n");
	printf("->Las siguientes lineas de codigo nos permite leer dos numeros de teclado y guardarlos en las variables numUno y numDos\n");
	printf("scanf(\"%%d\",&numUno); \nscanf(\"%%d\",&numDos);\n");
	printf("->Introduce un numero entero:\n");
	scanf("%d",&numUno);
	printf("->Introduce el segundo numero:\n");
	scanf("%d", &numDos);
	suma=funcionSuma(numUno,numDos);
	resta=funcionResta(numUno,numDos);
	multiplicacion=funcionMultiplicacion(numUno,numDos);
	division=funcionDivision(numUno,numDos);

	printf("%d + %d = %d \n",numUno, numDos,suma);
	printf("%d - %d = %d \n",numUno, numDos,resta);
	printf("%d * %d = %d \n",numUno, numDos,multiplicacion);
	printf("%d / %d = %f \n",numUno, numDos,division);	
	
	
	return 0;
}
// Functions - Funciones 

int funcionSuma(int num1, int num2)
{
	int resultado=0; //Variable local, solo existe dentro de la funcion
	resultado = num1+num2;
	return resultado;
}

int funcionResta(int num1, int num2)
{
	int resultado = 0;	//Variable local, solo existe dentro de la funcion
	resultado =num1-num2;
	return resultado;	

}
int funcionMultiplicacion(int num1, int num2)
{
	int multiplica; //Variable local, solo existe dentro de la funcion
	multiplica = num1 * num2;	
	return multiplica;
}

float funcionDivision(int num1,int num2)
{
	float resultado=0.0; //Variable local, solo existe dentro de la funcion
	resultado= (float)num1/num2;
	return resultado;
}

char siguienteCaracter(char letra)
{
	return letra + 1u; 
}



