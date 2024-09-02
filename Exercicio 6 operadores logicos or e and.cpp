/* Programa para explicar como funcionam os operadores logicos -OR e -AND
AND - só é verdadeiro quando todas as condições o são.
OR - só é falso quando todas as condições o são.

Exemplo:

	V	OR	F	V	AND 	F
	V	V	V	V	V		V
	V	V	F	V	F		F
	F	V	V	F	F		V
	F	F	F	F	F		F
	2 de fevereiro de 2022
	Catarina costa */
	
	/* Introducao das bibliotecas*/
	
	#include<stdio.h>

/* Programa Principal*/

main(){
	
	/* Introducao das variaveis*/
	
	int a, b;
	
	a = 5;
	b = 35;
	
	if((a >= 0 && a <= 10) && (b >= 30 && b <= 40)){
		printf("PARABENS! Valores dentro do intervalo.");
	}
	else{
		printf("ERRO! Valores fora do intervalo.");
		
		/* Fim dos operadores logicos de OR e AND*/ 
	}
}