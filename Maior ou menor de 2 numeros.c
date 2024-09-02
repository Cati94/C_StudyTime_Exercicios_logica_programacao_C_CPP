#include <stdio.h>
int main ()
{

	// Bloco de introducao variaveis//
	int n1;
	int n2;
	// fim de bloco de introducao de variaveis//
	
	// Bloco de operações//
	printf("%f\n Introduza o primeiro numero: ");
	scanf("%f", &n1);
	printf("%f\n Introduza o segundo numero: ");
	scanf("%f", &n2);
	// Bloco de fim de operações//
	
	// Bloco de estrutura condicional//
	if (n1> n2) {
		printf("\n\ O numero 1 e maior que o 2");
		if (n1=n2) {
		printf("\n\ O numero 1 e igual ao 2");
		}
		else (n1>n2){
		}
		if (n1<n2){
			printf("\n\ O numero 1 e menor que o 2");
		}
		

	}
	// Fim do bloco de estrutura condicional//
	
}
