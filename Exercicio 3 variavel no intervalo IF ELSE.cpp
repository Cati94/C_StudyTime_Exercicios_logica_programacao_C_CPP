/* Programa para mostrar o funcionamento do IF, ELSE IF e ELSE
31 de janeiro de 2022 Catarina Costa*/

# include<stdio.h>
main(){
	/* declaracao de variaveis*/
	int num;
	num=0;
	
	/* Instrucao ao utilizador*/
	printf("***************************************************\n");
	printf("* Programa que determina a pertenca de um numero ao intervalo ***********************\n");
	printf("**************************************************************************************\n");
	
	/* Pedido ao utilizador*/
	printf("\n\n Introduza um numero entre 1 e 10: ");
	scanf("%d", &num);
	
	/* Comando IF e ELSE*/
	
	if(num <= 0){
 		
 		printf("A variavel e menor ou negativa.");
 		printf("A variavel esta fora do intervalo, tente de novo");
	}
		
	else{
		
		printf("A variavel e positiva e encontra-se no intervalo");
	}
}
	
	