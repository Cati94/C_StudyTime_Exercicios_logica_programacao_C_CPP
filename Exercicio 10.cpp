/************************************************************
Programa para demonstrar o funcionamento do comando DE WHILE *
03 de fevereiro de 2022 - Catarina Costa *********************
************************************************************/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/* Inicio do programa */
main(){
	
	/* Introducao das variaveos*/
	int num1;
	
	num1 = 1;
	
	/* Instrucoes ao utilizador*/
 	printf("----------------------------------------------------------\n");
	printf("- Program to work the comand  Do-While -\n");
	printf("----------------------------------------------------------\n");
	
	/* Comando Do While*/
	do{ 
		system("cls");
		if(num1 <= 0){
			printf("the value introduce before was  %d", num1);
		}
		printf("\n\n Introduce a positive number ");
		scanf("%d", &num1);
		if(num1 <= 0){
			system("cls");
			printf("\n\n Insert a positive number!");
			printf("\n Try again.");
			printf("\n\n\n------------ Press any key to continue ------------");
			getch();
		}
	}while(num1 <= 0);
	
	system("cls");
	printf("the value introduced was %d", num1);
	printf("\n\n That´s correct !");
	
	/* Fim do programa*/
 printf("----------------------------------------------------------\n");
	printf("- Press any key to exit the program  -\n");
	printf("----------------------------------------------------------\n");
}