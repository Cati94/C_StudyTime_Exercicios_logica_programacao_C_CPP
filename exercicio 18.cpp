/** Programa para demonstrar como funcionam as funcoes
9 de marco de 2022
Catarina Costa */

/* Introducao das bibliotecas*/	
#include<stdio.h>
#include<conio.h>


void info(){ 
	
	/* Informacao ao utilizador*/
	
	printf("*********************************************************\n");
	printf(" *     Programa para ensenar las funciones en C      *    \n");
	printf("**********************************************************\n");
	getch();
}


int Pedir_valor(){ 

/* Introducao das variaveis*/

	int num; 
	
/* Pedido de valores ao utilizador*/
	
	printf("\n\n Introduce un valor intero:  ");
	scanf("%d", &num);
	return(num);
}

/* Funcao soma de dois valores*/
	
int soma(int a, int b){ 
	int sum;
	
	sum = a + b;
	return(sum);
/* Mostrar o valor ao utilizador*/ 
}
 void somaT(int a, int b){ 
	int t;
	
	t = a + b;
	
	printf("\n\n Total de los numeros  %d, %d es %d", a, b, t);
}
 int main()
 {
	int num1, num2, total;
	
	info();

	somaT(Pedir_valor(), Pedir_valor());
	
	/* Fim do programa*/

	printf("**********************************************************\n");
	printf(" * Presione cualquier tecla para salir del programa *     \n");
	printf("**********************************************************\n");
}





		
	
	
	