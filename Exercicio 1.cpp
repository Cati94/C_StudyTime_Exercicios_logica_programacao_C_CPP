/* Este é um programa para mostrar os principios basicos da linguagem C
24 a 26 de janeiro de 2022_____________________________________________
Catarina Costa _______________________________________________________ */ 

/* Cometario de varias linguas 
este e um comentario*/

/* inciio Declaracao das bibliotecas*/
#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h> 
#define pi 3.1415  // declaração de uma constante
/* fim da declaracao das bibliotecas*/

/* inicio do programa principal*/
main (){
	/* inicio da declaracao de variaveis*/
	float aux,a,b,c;
	aux= 12.9;
	a= 2;
	b= 4;
	c= 1;
	/* Fim da declaracao de variaveis*/
	
	/* Incio do comando de mostrar no ecra*/
	printf("Hello world \n\n");
	printf("its my C language first program \n\n"); // o "\n" serve para mudar de linha
	printf("Valor da constante pi: %.4f", pi);
	printf("\nVariavel aux: %.2f", aux);
	
	// simbolos das operações matemáticas => '+', '-', '*' - multiplicação, '/' - divisão
	aux = a + b;
	printf("\nA soma de %.0f com %.0f = %.0f", a, b, aux); // %f é colocado para reais (tipo float) e %d para inteiros (tipo int)
	
	aux = b - a;
	printf("\nVariavel aux: %.2f", aux);
	
	aux = a * b;
	printf("\nVariavel c: %.2f", aux);
	
	/* Pedido de valores aux ao utilizador*/
	
	printf("\n\nIntroduza um valor inteiro: ");
	scanf("%d", &aux); 
	
	printf("\nVariavel aux: %d", aux);
	/* Fim do pedido de valores ao utilizador*/ 
	
	// system("pause"); // efetua uma pausa no sistema
	// system("cls"); // limpa o ecrã (consola)
	// printf("\n\n----------------.Prima qualquer tecla para continuar -------------------\n");
	// getch();
}