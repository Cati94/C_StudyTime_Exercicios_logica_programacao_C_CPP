/* --------------------------------------------------------------------------------------
Programa para pedir 10 elementos inteiros ao utilizador e organização dos mesmos num array
09-03-2022, Catarina Costa
-----------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
	//início da Declaracao de variaveis
	int ordem[10], n, y, aux01;
	
	//Pedido de introducao dos dados ao utilizador
	for ( n = 0 ; n < 10 ; n++){
		printf(" Programa para a ordenar um array de 10 numeros introduzidos \n");
		printf("Numero %d : ", n+1 );
		scanf("%d",&ordem[n]);
		system("cls");
	}
	
	//layout dos dados introduzidos
	printf("\t\t\t*******************************\n");
	printf("\t\t\tO numeros introduzidos foram : ");
	//layout dos dados introduzidos
	printf("\t\t\t*******************************\n");
	printf("\t\t\tO numeros introduzidos foram : ");
	printf("\n\t\t\t*******************************\n");
	printf("\t\t\t");
	for ( n  =0 ;  n < 10 ; n++){
		printf(" %d ",ordem[n]);
	}
	
	//Ordenacao Decrescente - listagem 
	for ( n = 0 ; n < 10 ; n++){
		for ( y = 0 ; y < 10 ; y++){
			if ( ordem[n] > ordem[y] ){
				aux01 = ordem[y];
				ordem[y] = ordem[n];
				ordem[n] = aux01;
			}
		}
	}
	
	printf("\n\n\n\t-------------------------------------------------");
	printf("\n\tListagem por ordem decrescente : ");
	for (n=0 ; n<10 ; n++){
		printf(" %d ",ordem[n]);
	}
	//Ordenacao Crescente - listagem//
	for ( n = 9 ; n >= 0 ; n--) {
		for (y = 9 ; y >= 0 ; y-- ){
			if ( ordem[n] > ordem[y] ){
				aux01 = ordem[y];
				ordem[y] = ordem[n];
				ordem[n] = aux01;
			}
		}
	}
	
	printf("\n\n\n\t-------------------------------------------------");
	printf("\n\tListagem por ordem crescente : ");
	for (n=0 ; n<10 ; n++){
		printf(" %d ",ordem[n]);
	}
	printf("\n\n\t\t Fim do Programa ");
	printf("\n\t Prima qualquer tecla para sair");
	getch();
}