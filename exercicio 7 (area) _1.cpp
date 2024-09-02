#include <stdio.h>
int main ()
{
	// declaração de variáveis //
	float base;
	float altura;
	float area;
	// fim do bloco //
	
	// bloco do ES do utilizador//
	printf("insira o valor da base: \n ");
	scanf("%f", &base);
	printf("insira o valor da altura:  \n ");
	scanf("%f" , &altura);
	// fim do bloco//
	
	
	// bloco de processamento da area//
	area = (base * altura);
	// fim do bloco//
	
	
	// bloco de output//
	printf("base= %f \n", base);
	printf("altura= %f \n", altura);
	printf("area= %f \n", area);
	// fim do bloco//
	
	
	return  0;