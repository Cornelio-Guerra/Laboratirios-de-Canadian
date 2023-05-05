#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int option;
	
	printf("Seleciona una opcion: \n");
	printf("1. Suma \n");
	printf("2. Resta \n");
	printf("3. Multiplicacion \n");
	printf("4. Divicion \n");
	scanf ("%d", &option);
	
	if (option == 1) {
		int num1, num2, resultado;
		printf("Introduce el primer numero: \n");
		scanf ("%d", &num1 );
		printf("Introduce el segundo numero: \n");
		scanf ("%d", &num2 );		
		resultado = num1 + num2;
		printf("El resultado de la Suma es %d", resultado);		
	} else if  (option == 2){
		int num1, num2, resultado;
		printf("Introduce el primer numero: \n");
		scanf ("%d", &num1 );
		printf("Introduce el segundo numero: \n");
		scanf ("%d", &num2 );		
		resultado = num1 - num2;
		printf("El resultado de la Resta es %d", resultado);		
	} else if  (option == 3){
		int num1, num2, resultado;
		printf("Introduce el primer numero: \n");
		scanf ("%d", &num1 );
		printf("Introduce el segundo numero: \n");
		scanf ("%d", &num2 );		
		resultado = num1 * num2;
		printf("El resultado de la Multiplicacion es %d", resultado);			
	} else if  (option == 4){
		int num1, num2;
		float resultado;
		printf("Introduce el primer numero: \n");
		scanf ("%d", &num1 );
		printf("Introduce el segundo numero:\n");
		scanf ("%d", &num2 );		
		resultado = num1 / num2;
		printf("El resultado de la Divicion es %f.2", resultado);			
	} else {
		printf("opcion selecionada no es valida");
		int per;
		per = 0;
		while (per<5) {
			printf("PERDISTE \n");
			per=per+1;
		}
		
		
	}
	return 0;
}
