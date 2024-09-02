/** Programa para demonstrar o funcionamento de menus e submenus
9 de marco de 2022 - Catarina Costa */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

  
  
 	/* Menu principal*/
 	int menu0()
    {   
 	int op ;
 	
 	system("cls");
	printf("******************\n");
	printf("* 1 - Areas      *\n");
	printf("* 2 - Volumes    *\n");
	printf("* 3 - Arrays     *\n");
	printf("* 4 - perimetro  *\n");
	printf("* 0 - Sair       *\n");
	printf("******************\n");
	printf("=> ");
	scanf("%d", &op);
	
	return(op);
    } 
    
 	/* Menu Auxiliar*/ 
 	
 	int menu1()
 	{
	 
	  	int op;
 	
 	system("cls");
	printf("******************\n");
	printf("* 1 - Circulo    *\n");
	printf("* 2 - Rectangulo *\n");
	printf("* 3 - Triangulo  *\n");
	printf("* 4 - Trapezio   *\n");
	printf("* 0 - Voltar     *\n");
	printf("******************\n");
	printf("=> ");
	scanf("%d", &op);
	
	return(op);
	}
 
 
 void info()
 {
 
 	system("cls");
	printf("\t\t A opcao nao existe!!!");
	getch();
 }
 
 
 void voltar()
 {
 
 	system("cls");
	printf("****************** Voltar ao menu principal ********************\n");
	getch();
 
 }
 
 /* Inicio do programa*/
  main()
  {
  	/* Introducao das variaveis*/
  	int menuP, menuA;
 	const float PI = 3.14156;
 	
 	/* Instrucoes ao utilizador*/
 	printf("----------------------------------------------------------\n");
	printf("- Programa para o funcionamento de menus e submenus -------\n");
	printf("----------------------------------------------------------\n");
	
	/* Switch case*/
 do{
 		menuP = menu0();
 		switch(menuP){
 			case 0: {
 				system("cls");
 				printf("****************** A sair, obrigado ********************\n");
 				getch();
				break;
			}
 			case 1:{
 				do{
 					menuA = menu1();
			 		switch(menuA){
			 			case 0:{
			 				voltar();
							break;
						}
						case 1:{
							system("cls");
							printf("Opcao para calcular a area de um circulo.\n\n");
							getch();
							break;
						}
						case 2:{
							system("cls");
							printf("Rectangulos");
							getch();
							break;
						}
						case 3:{
							system("cls");
							printf("Triangulos");
							getch();
							break;
						}
						default: {
							info();
							break;
						}
					 }
					 
			 /* While Case 2 e 3*/
			 	}while(menuA != 0);
 				getch();
				break;
			}
			case 2:{
				system("cls");
				printf("Volumes");
				getch();
				break;
			}
			case 3:{
				system("cls");
				printf("Arrays");
				getch();
				break;
			}
			default: {
				info();
				break;
			}
		 }
		 
		 /* While*/
	 }while(menuP != 0);
 }

