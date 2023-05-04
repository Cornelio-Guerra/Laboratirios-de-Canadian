#include <stdio.h>
int main() {
    int salida, selección;
    salida = 0;
    // creando las variables necesarias para el ciclo “while” y la selección con “if”, “else if” y “else”
    // y estableciendo la variable salida a 0 para que el ciclo “while” cumpla con su condición
    while (salida <= 1) {
        printf(“Que desea realizar \n 1. Suma \n 2. Resta \n 3. Multiplicación \n 4. Division \n 5. Salir de la calculadora”);
        // Solicitando que va a realizar el programa
        scanf(“%d”, &selección);
        // guardando a selección en la variable “selección”
        if (selección == 5) {
            // pongo a selección 5 en primer lugar porque esta es para salir de del programa y si
            // vas a salir del programa no hay necesidad de revisar las otras variables
            salida = salida+1;
        } else {
            int num1, num2;
            float resultado;
            // creando variables para las operaciones aritméticas una de las variables es
            “float” esto //es por la división que muy probable que esta contenga
            decimales
            printf(“Selecione el primer número \n”);
            scanf(“%d”, &num1);
            printf(“Selecione el segundo número \n”);
            scanf(“%d”, &num2);
            // preguntando números para las operaciones y almacenándolas en variables
            if (selección == 1) {
                resultado = num1 + num2;
                printf(“El resultado de Suma es %f”, resultado)
            } else if (selección == 2) {
                resultado = num1 - num2;
                printf(“El resultado de Resta es %f”, resultado)
            } else if (selección == 3) {
                resultado = num1 * num2;
                printf(“El resultado de Multiplicación es %f”, resultado)
            } else if (selección == 4) {
                resultado = num1 / num2;
                printf(“El resultado de División es %f”, resultado)
            } else {
                printf(“ERROR \n El valor seleccionado no es una opción”)
            }
            // todo esto fue explicado en clase así que no lo voy a explicar
        }
    }
    return 0;
}