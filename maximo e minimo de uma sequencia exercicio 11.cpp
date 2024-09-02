#include <stdio.h>
int main ()
{

	//declaracao de variaveis//
	int n1,n2,n3;
	
        
	// Introducao do programa ao utilizador //
    printf("............. Este programa serve para calcular o maior e menor de uma sequencia de tres numeros...........\n");
    printf("............................................................................................................\n");
      	
	// Instrucoes ao utilizador primeiro número//
	printf("introduza o primeiro valor da sequencia:\n");
	scanf("%d/n", &n1);
	// Instrucoes ao utilizador segundo numero//
	printf("introduza o segundo valor da sequencia:\n");
	scanf("%d\n", &n2);
	// Instrucoes ao utilizador terceiro numero//
	printf("introduza o terceiro valor da sequencia:\n");
	scanf("%d\n", &n3);
     // calcular máximo e mínimo da sequência//
     
     // primeira condição//
        
     if (n1>n2)
     {
		 printf(" o numero maior :%d", n1);
    	 printf(" o numero menor : %d", n2);
     
	 }
     
     else if (n1<n2);
     {
	    printf(" o numero maior :%d", n1);
    	printf(" o numero menor : %d", n2);
	 }
     
     // segunda condição//
     if (n1>n3)
     {
     	printf(" o numero maior :%d", n1);
     	printf(" o numero menor : %d", n3);
	 }
     else if (n1<n3);
     {
    	printf(" o numero maior :%d", n3);
    	printf(" o numero menor : %d", n1);
	 }
     
     // terceira condição//
     if (n2<n3)
     {
     	printf(" o numero maior :%d", n3);
     	printf(" o numero menor : %d", n2);
	 }
     else if  (n2>n3);
     {
     	printf(" o numero maior :%d", n2);
     	printf(" o numero menor : %d", n3);
	 }
      // Finalizar o programa//
      
       printf("Carregue em qualquer tecla para sair do programa\n");
}
