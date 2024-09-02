/* Programa de tabuada universal 
data 31-1-2022
Catarina Costa*/
/* Declaracao das bibliotecas*/
 #include<stdio.h>
 #include<conio.h>
/* fim da declaracao de bibliotecas*/

/* Programa principal*/
main (){
/* Declaracao de variaveis*/
	int num;
	// informção ao utilizador
	printf("***************************************************\n");
	printf("* Programa da tabuada universal***********************\n");
	printf("**************************************************\n");
	
	printf("\n\n Qual a tabuada que pretende:  ");
	printf("\n\n Coloque um numero de 1 a 10  ");
	scanf("%d", &num);
	/* Inicio do if*/
		
			if (num <= 0){
			printf("ERROR !! Number negative or invalid, Try again.");
		}
		else if (num > 10){
		printf("ERROR! Number bigger than 10! Try again.");
	}
	//else if (num == 0){
		//printf("ERROR!! Number invalid!");
	//}

	
	/* else*/
	else{	
		printf("\n\tTabuada do %d:", num);
		printf("\n\n\t%d x 1 = %d", num, num * 1);
		printf("\n\t%d x 2 = %d", num, num * 2);
		printf("\n\t%d x 3 = %d", num, num * 3);
		printf("\n\t%d x 4 = %d", num, num * 4);
		printf("\n\t%d x 5 = %d", num, num * 5);
		printf("\n\t%d x 6 = %d", num, num * 6);
		printf("\n\t%d x 7 = %d", num, num * 7);
		printf("\n\t%d x 8 = %d", num, num * 8);
		printf("\n\t%d x 9 = %d", num, num * 9);
		printf("\n\t%d x 10 = %d", num, num * 10);
	}
	/* fim do programa*/ 
	printf("\n\n\n******************************* Prima qualquer tecla para terminar********************");
	getch();
	/* fim do programa*/ 
}
