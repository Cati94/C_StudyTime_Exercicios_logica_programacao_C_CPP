/* ____Programa criado para determinar se um número é primo
2 a 3 de fevereiro de 2022 ____________________________
________________________________________Catarina Costa*/

/* declaracao das bibliotecas*/

#include<stdio.h>
#include <locale.h>
 
 /* incio do programa principal*/
 
 int main() {
 setlocale(LC_ALL, "");
 /* Declaracao das variaveis*/
 int num, i, resultado = 0;
 
 /* Instrucoes ao utilizador*/
 	printf("----------------------------------------------------------\n");
	printf("- Programa para determinar se um numero e primo ou não -\n");
	printf("----------------------------------------------------------\n");
	
 	printf("Digite um numero: ");
 	scanf("%d", &num);
 
 /* Ciclo for*/
 
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    printf("%d e um numero primo\n", num);
 else
    printf("%d nao e um numero primo\n", num);
    
 /* Fim do programa*/
 printf("----------------------------------------------------------\n");
	printf("- Carregue em qualquer tecla para terminar o programa  -\n");
	printf("----------------------------------------------------------\n");
 return 0;
}