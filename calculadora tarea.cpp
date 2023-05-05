#include <stdio.h>
int main() {

int salida, seleccion;
salida = 0;
// creando las variables necesarias para el ciclo “while” y la selección con “if”, “else if” y “else” y estableciendo la variable salida a 0 para que el ciclo “while” cumpla con su condición
while (salida <= 1) {
	printf("\n Que desea realizar \n 1. Suma \n 2. Resta \n 3. Multiplicacion \n 4. Division \n 5. Salir de la calculadora \n");
	// Solicitando que va a realizar el programa
	scanf("%d", &seleccion);
	// guardando a selección en la variable “selección”
	if (seleccion == 5) {
	// pongo a selección 5 en primer lugar porque esta es para salir de del programa y si vas a salir del programa no hay necesidad de revisar las otras variables
		break;
	} else {
		float num1, num2, resultado;
		// creando variables para las operaciones aritméticas una de las variables “float” esto es por la división que muy probable que esta contenga decimales
	printf("Selecione el primer numero \n");
	scanf("%d", &num1);
	printf("Selecione el segundo numero \n");
	scanf("%d", &num2);
	// preguntando números para las operaciones y almacenándolas en variables
		if (seleccion == 1) {
			resultado = num1 + num2;
			printf("\n El resultado de Suma es %f", resultado);
		} else if (seleccion == 2) {
			resultado = num1 - num2;
			printf("\n El resultado de Resta es %f", resultado);
		} else if (seleccion == 3) {
			resultado = num1 * num2;
			printf("\n El resultado de Multiplicacion es %f", resultado);
		} else if (seleccion == 4) {
			resultado = num1 / num2;
			printf("\n El resultado de Division es %f", resultado);
		} else {
			printf("\n ERROR /n El valor seleccionado no es una opción");
		}
		// todo esto fue explicado en clase así que no lo voy a explicar
	}
	}
	return 0;
}
