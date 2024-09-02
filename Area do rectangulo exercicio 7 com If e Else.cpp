/* Programa para calcular a area do retangulo dentro do intervalo 1 a 19
Catarina Costa*/

/* Introducao da biblioteca*/

#include<stdio.h>

/* Inicio do Programa principal */

main(){
	/* Declaracao das variaveis*/
	
	float l1, l2, area;
	
	/* Instrucao para o utilizador*/
	
	printf("**************************************************\n");
	printf(" * Prgrama para mostrar  a area de retangulo. * \n");
	printf("**************************************************\n");
	
	printf("\n\n Introduza o valor de um dos lados (valor entre 1 e 19): ");
	scanf("%f", &l1);
	printf("\n\nIntroduza o valor do outro lado (valor entre 1 e 19): ");
	scanf("%f", &l2);
	
	if(l1 >= 1 && l1 <= 19){
		printf("\n\nIntroduza o valor do outro lado (valor entre 1 e 19): ");
		scanf("%f", &l2);
		if(l2 >= 1 && l2 <= 19){
			area = l1 * l2;
			printf("\n\nOs valores introduzidos foram:\n");
			printf("1o Lado: %.1f m", l1);
			printf("\n2o Lado: %.1f m", l2);
			printf("\n\n A area do retangulo e: %.2f m2", area);
		}
		else{
			printf("\n\n O valor do segundo lado nao obedece ao parametros exigidos.");
		}
	}
	else{
		printf("\n\n O valor do lado nao obedece ao parametros exigidos.");
	}
	
	if((l1 >=1 && l1 <= 19) && (l2 >=1 && l2 <= 19)){
		area = l1 * l2;
		printf("\n\nOs valores introduzidos foram:\n");
		printf("1o Lado: %.1f m", l1);
		printf("\n2o Lado: %.1f m", l2);
		printf("\n\nA area do retangulo e: %.2f m2", area);
	}
	else{
		printf("\n\n Os valores ou um dos valores nao obedece ao parametros exigidos.");
	}
}