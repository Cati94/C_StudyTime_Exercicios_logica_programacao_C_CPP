/* Programa para demonstrar o funcionamento de vetores
2 de março de 2022 - Catarina Costa*/

#include<stdio.h>

/* Inicio do programa*/

main(){
	
	/* Declaracao das variaveis*/
	
	int vetor[10], n; 
	
	 /* Instrucoes ao utilizador*/
 	printf("----------------------------------------------------------\n");
	printf("- Programa para indicar a posicao de um vetor -------------\n");
	printf("----------------------------------------------------------\n");
	
	
	/* Indicacao do vetor*/
	
	vetor[0] = 10;
	
	printf("A posicao 0 do vetor contem o numero %d\n\n", vetor[0]);
	
	/* Ciclo for*/
	
	for(n=0; n<10; n++){
		vetor[n] = n*5;
	}
	
	/* Mostrar a posicao do vetor*/
	
	printf("Posicao:\n\n");
	
	for(n=0; n<10; n++){ 
		printf("%d = %d\n",n, vetor[n]);
	}
	
	/* Fim do programa*/
 printf("----------------------------------------------------------\n");
	printf("- Carregue em qualquer tecla para terminar o programa  -\n");
	printf("----------------------------------------------------------\n");
}