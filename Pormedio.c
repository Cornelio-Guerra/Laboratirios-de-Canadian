#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float nota1, nota2, nota3, nota4, nota5, porcen;
	char name[20];
	printf ("Ingrese el nombre del estudiante\n");
	scanf ("%s",&name);

	printf ("\nIngrese las 5 notas del estudiante\n");
	scanf ("%f",&nota1);
	scanf ("%f",&nota2);
	scanf ("%f",&nota3);
	scanf ("%f",&nota4);
	scanf ("%f",&nota5);
	porcen= (nota1+nota2+nota3+nota4+nota5)/5;
	printf("El promedio de %s es %f,2",name, porcen);
	
	return 0;
}
