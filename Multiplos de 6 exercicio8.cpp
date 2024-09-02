/* Programa para demonstrar os multiplos de 6 
Catarina Costa*/

/* Introducao das bibliotecas*/

#include<stdio.h>
#include<conio.h>

/* Programa principal*/

main(){
	
	/* Introducao de variaveis*/
	
	int num1;
	
	/* Instrucoes ao utilizador*/
	
		printf("***********************************************************\n");
	printf(" * Programa determinar multiplos de 6 * \n");
	printf("**********************************************************\n");
	
	printf("\n Introduza um numero inteiro (entre 6 e 100): ");
	scanf("%d", &num1);
	
/* O que devolve ao utilizador*/
	
	printf("\n\n O numero introduzido foi %d.", num1);
	
	/* Comeco da operacao dos multiplos*/
	
	if(num1 % 6 == 0){
		printf("\n\nO numero e multiplo de 6, porque o resto da divisao de %d por 6 e 0.", num1);
	}
	else{
		printf("\n\nO numero nao e multiplo de 6, porque o resto da divisao de %d por 6 e diferente de 0.", num1);
	}
	/*  Fim do programa*/
	printf("***********************************************************\n");
	printf(" * Carregue em qualquer tecla para terminar o programa * \n");
	printf("**********************************************************\n");
	getch();
}