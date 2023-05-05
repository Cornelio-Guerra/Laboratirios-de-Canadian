# include <stdio.h>
# include <stdlib.h>
//int main ()

int num1,num2,ans=0,i ;
while (i == 0);
{	
printf ( "Digite un numero entero" );

scanf ("%d", &num1);

// "%d" scanea enteros 
// La arquitectura de scanf ("TIPO DE DATO" , &VARIABLE );

printf ( "Digite otro numero entero" );
scanf ("%d", &num2);

ans = num1 + num2;

//printf ( "El resulto de la suma es = %d", sum );

if (ans >= 50)
	printf ( "Aprovado" );
else 
	printf ( "Denegado" );
	
printf ("desea continuar");
scanf ("%d", &i);
	
}
