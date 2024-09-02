/*******************************************************
Programa para demonstrar o funcionamento do Switch case *
16 de feveiro de 2022 - Catarina Correia da Costa *******
********************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/* Inicio do programa*/

main(){
	/* Introducao das variaveis*/
	
	int op, num1, num2;
	char opa;
	
	/* Instrucoes ao utilizador*/
 	printf("----------------------------------------------------------\n");
	printf("- Programa para el funcionamento del switch case -\n");
	printf("----------------------------------------------------------\n");
	/* Comando do-While*/
	
	do{
		system("cls");
		printf("\nXXXXXXXXXXXXXXXXXXXXXXX");
		printf("\n X 1 - Suma            X");
		printf("\n X 2 - Resta           X");
		printf("\n X 3 - Multiplicacion X");
		printf("\n X 4 - division     X");
		printf("\n X                  X");
		printf("\n X 0 - Salir          X");
		printf("\n XXXXXXXXXXXXXXXXXXXXXXX");
		
		printf("\n=> ");
		scanf("%c", &opa);
		
		/* Switch case*/ 
		
		switch(opa){
			case 'a':{
				printf("\n\n-------- Saliendo -----------");
				break;
			}
			case '1':{
				printf("\n\n-------- Suma -----------\n");
				printf("\n Introduce el primer numero:");
				scanf("%d", &num1);
				printf("\n  Introduce el segundo numero :");
				scanf("%d", &num2);
				printf("\n\n La suma de %d con %d es igual a  %d", num1, num2, num1 + num2);
				getch();
				break;
			}
			case '2':{
				printf("\n\n-------- opcion 2 -----------");
				getch();
				break;
			}
			case '3':{
				printf("\n\n-------- opcion 3 -----------");
				getch();
				break;
			}
			default:{
				printf("\n\n ERROR! No existe");
				getch();
				break;
			}
		}
	}while(op != 0);
	
	/* Fim do programa*/
	
 printf("----------------------------------------------------------\n");
	printf("- Presione cualquier tecla para seguir  -\n");
	printf("----------------------------------------------------------\n");
}