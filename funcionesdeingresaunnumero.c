/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

// Declaraciones adelantadas de las funciones
float calcularareadelcuadrado(float lado);

float calcularareadelcuadrado(float lado) {
	float areacuadrado;
	areacuadrado = (lado*lado);
	return areacuadrado;
}

int main() {
	SIN_TIPO areacuadrado;
	float lado;
	printf("Ingresa la medida de un lado de tu cuadrado : \n");
	scanf("%f", &lado);
	areacuadrado = calcularareadelcuadrado(lado);
	printf("El area del cuadrado es: %f\n", areacuadrado);
	return 0;
}

