#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2, sum, resta, multi;
	float divic;
	printf("digite un numero");
	scanf("%d", &num1);
	printf("digite otro numero");
	scanf("%d", &num2);
	
	sum   = num1 + num2;
	resta = num1 - num2;
	multi = num1 * num2;
	divic = num1 / num2;
	
	printf("La Suma es: %d\n", sum);
	printf("La Resta es: %d\n", resta);
	printf("La Multiplicacion es: %d\n", multi);	
	printf("La Divicion es: %f\n", divic);
	
	return 0;
}
