/*************************************************
Programa para demonstrar o comando While**********
3 de fevereiro de 2022 - Catarina Costa *********/

#include<stdio.h>
#include<conio.h>

	/* Inicio do programa*/ 
		
	main(){
		
	/* Introducao das variaveis*/
	
	int num1;
	
	/* Instrucoes ao utilizador*/
	
 	printf("----------------------------------------------------------\n");
	printf("-                Program to while comand                 -\n");
	printf("----------------------------------------------------------\n");
	
	/* Instrucoes ao utilizador*/ 
	
	printf("Introduce a positive number:");
	scanf("%d", &num1);
	
	/* Comando While*/
	
	while(num1 <= 0){ 
		printf("\n\n The number introduced is not respect the request, try again: ");
		scanf("%d", &num1);
}
	while(num1 <= 5){
		printf("\n\t=> %d", num1);
		num1 = num1 + 1;
	}
		printf("\n\n Well done!");
		
	/* Fim do programa*/

 	printf("----------------------------------------------------------\n");
	printf("-          Press any key to exit the program             -\n");
	printf("----------------------------------------------------------\n");
}