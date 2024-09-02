/* Programa para mostrar como fazer as operacoes matematicas em C
01 de fevereiro de 2022
Catarina Costa*/
/* Introducao das bibliotecas*/
# include<stdio.h>
 
 /* Inicio do programa */
 
 main(){
 	
 	/* Introducao das variaveis*/
 	
 	int a, b, rd;
 	float num1, num2, res;
 	
 	num1 = 10;
 	num2 = 3;
 	
 	a = 10;
 	b = 3;
 	
 	/* operacoes matematicas*/
 	
 	res = num1 + num2;
 	printf("A soma de %.1f com %.1f eh %.1f", num1, num2, res);
 	
 	res = num1 * num2;
 	printf("\n\nA multiplicacao de %.1f com %.1f eh %.1f", num1, num2, res);
 	
 	res = num1 / num2;
 	printf("\n\nA divisao de %f por %f eh %f", num1, num2, res);
 	
 	res = num1 - num2;
 	printf("\n\nA subtracao de %.1f com %.1f eh %.1f", num1, num2, res);
 	
 	/* Resto da divisao*/
 	rd = a % b;
 	printf("\n\nA divisao de %d por %d eh %.0f e tem um resto de %d", a, b, res, rd);
 	
 }