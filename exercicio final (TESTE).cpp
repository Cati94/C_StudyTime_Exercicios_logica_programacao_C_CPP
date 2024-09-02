/** Programa para teste final
15 de marco de 2022 - Catarina Costa **/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define PI 3.1415 

  	/* Função para mostrar o menu principal e devolver a opção */
 int menu_p(){
 	int op;
 	
 	system("cls");
	printf("*******************************\n");
	printf("* 1 - Arrays                  *\n");
	printf("* 2 - Formulas Matematicas    *\n");
	printf("*                             *\n");
	printf("* 0 - Sair                    *\n");
	printf("*******************************\n");
	printf("=> ");
	scanf("%d", &op);
	
	return(op);
 }
 
 
  /* Função para mostrar o menu 1 dos Arrays e devolver a opção */
 int menu_1(){
 	int op;
 	
 	system("cls");
	printf("***********************************************\n");
	//printf("* 1 - Dimensao e introducao de valores        *\n");
	//printf("* 2 - Visualizacao do vetor                   *\n");
	printf("* 1 - Ordenacao do vetor de forma crescente   *\n");
	printf("* 2 - Ordenacao do vetor de forma decrescente *\n");
	printf("* 3 - Soma de todos os valores                *\n");
	printf("*                                             *\n");
	printf("* 0 - Voltar                                  *\n");
	printf("***********************************************\n");
	printf("=> ");
	scanf("%d", &op);
	
	return(op);
 }
 
 
 void invalida(){
 	system("cls");
	printf("\t\topcao nao existente!!!");
	getch();
 }
 
 
 void voltar_menu_p(){
 	system("cls");
	printf("****************** Voltar ao menu principal ********************\n");
	getch();
 }

void voltar_menu_a(){
 	system("cls");
	printf("****************** Voltar ao menu anterior ********************\n");
	getch();
 }

void saida(){
 	system("cls");
	printf("****************** A sair, obrigada ********************\n");
	getch();
 } 
 
   /* Função para mostrar o menu 2 das Fórmulas Matemáticas e devolver a opção */
 int menu_2(){
 	int op;
 	
 	system("cls");
	printf("*****************************\n");
	printf("* 1 - Areas                 *\n");
	printf("* 2 - Volumes               *\n");
	printf("* 3 - Formula Resolvente    *\n");
	printf("*                           *\n");
	printf("* 0 - Voltar                *\n");
	printf("*****************************\n");
	printf("=> ");
	scanf("%d", &op);
	
	return(op);
 }
 
   /* Função para mostrar o menu 3 das Areas e devolver a opção */
 int menu_3(){
 	int op;
 	
 	system("cls");
	printf("*****************************\n");
	printf("* 1 - Circulo               *\n");
	printf("* 2 - Triangulo             *\n");
	printf("* 3 - Retangulo             *\n");
	printf("*                           *\n");
	printf("* 0 - Voltar                *\n");
	printf("*****************************\n");
	printf("=> ");
	scanf("%d", &op);
	
	return(op);
 } 
 
   /* Função para mostrar o menu 4 das Volumes e devolver a opção */
 int menu_4(){
 	int op;
 	
 	system("cls");
	printf("*****************************\n");
	printf("* 1 - Piramide              *\n");
	printf("* 2 - Cubo                  *\n");
	printf("* 3 - Esfera                *\n");
	printf("*                           *\n");
	printf("* 0 - Voltar                *\n");
	printf("*****************************\n");
	printf("=> ");
	scanf("%d", &op);
	
	return(op);
 } 
  
 	
 
	// função da área do círculo 
 void a_circulo()
{
 	float raio, area
	
	do
	{
		printf("\n Insira o raio do circulo: ");
 		scanf("%f", &raio);
 	}
 	while (raio <= 0);
 	
 	area = PI * raio * raio; 
 	
 	printf("\n A area do circulo eh: %.2f", area);
}


// função da área do triângulo
 void a_triangulo()
{
 	float base, altura, area_t;
	
	do
	{
		printf("\n Insira a base do triangulo: ");
 		scanf("%f", &base);
 		printf("\n Insira a altura do triangulo: ");
 		scanf("%f", &altura);
 	}
 	while (base <= 0 || altura <= 0);
 	
 	area_t = base * altura; 
 	
 	printf("\n A area do triangulo eh: %.2f", area_t);
}


// função da área do rectângulo

 void a_retangulo()
{
 	float l1, l2, area_r;
	
	do
	{
		printf("\n Insira o primeiro lado do retangulo ");
 		scanf("%f", &l1);
 		printf("\n Insira o segundo lado do retangulo ");
 		scanf("%f", &l2);
 	}
 	while (l1 <= 0 || l1 == l2);
 	
 	area_r = l1 * l2; 
 	
 	printf("\n A area do retangulo eh: %.2f", area_r);
}


//função volume piramide
void v_piramide()
{
 	float base_1, base_2, area_base, altura, volume_p;
	
	printf("Volume da piramide = (Area da base x altura) / 3");
	
	//Calcular primeiro a área da base da pirâmide
	do
	{
		printf("\n Insira a o primeiro lado da base da piramide ");
 		scanf("%f", &base_1);
 		printf("\n Insira o segundo lado da base da piramide ");
 		scanf("%f", &base_2);
 	}
 	while (base_1 <= 0);
 	
 	area_base = base_1 * base_2; 
 	
 	printf("\n A area da base eh: %.2f", area_base);

	{
		printf("\n Insira altura da piramide ");
 		scanf("%f", &altura);
 		
 	}
 	while (altura <= 0);
 	
 	volume_p = (area_base * altura) / 3; 
 	
 	printf("\n O volume da piramide eh: %.2f", volume_p);
}

// função do volume do cubo

void v_cubo()
{
 	float aresta, volume_cubo;
	
	do
	{
		printf("\n Insira a dimensao da aresta ");
 		scanf("%f", &aresta);
 	}
 	while (aresta <= 0);
 	
 	volume_cubo = aresta * aresta * aresta; 
 	
 	printf("\n O volume do cubo eh: %.2f", volume_cubo);
}

// função do volume da esfera
 void volumesfera()
{
 	float raio, volumeesfera;
	
	do
	{
		printf("\n Insira a dimensao do raio");
 		scanf("%f", &raio);
 	}
 	while (raio <= 0);
 	
 	volumeesfera = (4/3) * PI * (raio * raio * raio); 
 	
 	printf("\n O volume da esfera e: %.2f", volumeesfera);
}


// funcao array crescente
void array_crescente()
{
	
	int n, i, j, aux, array[10];
	
	for (n = 0; n <= 9 ; n++)
	{
		printf(" Insira o %d elemento do array: ", n + 1);
	 	scanf("%d", &array[n]);
 	}

	printf("\n Array introduza: ");
	for (n = 0; n <= 9 ; n++)
		{
			printf(" %d ", array[n]);
	 	}

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 0; j <= 9 ; j++)
		{
			if (array[i] < array[j])
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
			}
		}
	}
	
	printf("\n Array ordenado crescente: ");
	for (n = 0; n <= 9 ; n++)
		{
			printf(" %d ", array[n]);
	 	}
}
	// função  do array decrescente
void array_decrescente()
{
	
	int n, i, j, aux, array[10];
	
	for (n = 0; n <= 9 ; n++)
	{
		printf(" Insira o %d elemento do array: ", n + 1);
	 	scanf("%d", &array[n]);
 	}

	printf("\n Array introduzido: ");
	for (n = 0; n <= 9 ; n++)
		{
			printf(" %d ", array[n]);
	 	}

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 0; j <= 9 ; j++)
		{
			if (array[i] < array[j])
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
			}
		}
	}
	
	printf("\n Array ordenado decrescente: ");
	for (n = 9; n >= 0 ; n--)
		{
			printf(" %d ", array[n]);
	 	} 	
}

// Funcao soma do array//

void soma_array()
{
	int n, array[10],
		soma = 0;
	
	for (n = 0; n <= 9 ; n++)
	{
		printf(" Insira o %d elemento do array: ", n + 1);
	 	scanf("%d", &array[n]);
 	}
 	
 	for (n = 0; n <= 9 ; n++)
	{
	 	soma = soma + array[n];
 	}
 	
 	printf("\n A soma do array eh: %d", soma);
}

// funcao da formula resolvente

void resolvente() 
{ 
	//declaração das variáveis
	float A, B, C, DELTA, X, R1, R2;
	  
	  //informação ao utilizador  
	printf("------------------------------------------------------\n");
	printf("- Programa para resolver uma equacao de segundo grau -\n");
	printf("------------------------------------------------------\n");
	
	printf("\n\n Para saber X, iremos fazer o seguinte calculo: \n");
	printf("\n\n X = (-b +- SQRT(B^2 - 4*A*C)) / 2*A \n");
	
	do{
		
		printf("\n\nInsira o valor de A: ");
		scanf("%f", &A);
		
		if (A == 0)
		{
			printf("\n\tERRO! Numero Nulo.");
		}
	}
	while(A == 0);
	
	printf("Insira o valor de B: ");
	scanf("%f", &B);
	printf("Insira o valor de C: ");
	scanf("%f", &C);
	
	DELTA = (B * B) - (4 * A * C);
	printf("\n O DELTA eh %.2f", DELTA);

	if (DELTA < 0)  
	{
		printf("\n A equacao nao tem solucao!");
	}
	else if (DELTA == 0)
	{
		X = -B / (2 * A);
		printf("\n A raiz da equacao eh %.2f", X);
	}
	else
	{
		R1 = (-B - sqrt(DELTA))/(2 * A);
		printf("\n A 1a raiz da equacao eh %.2f", R1);
		
		R2 = (-B + sqrt(DELTA))/(2 * A);
		printf("\n A 2a raiz da equacao eh %.2f", R2);
	}
}

 // função principal do programa
 
  main(){
 	int op_menu_p, op_menu_1, op_menu_2, op_menu_3, op_menu_4;
 	
 	do{
 		op_menu_p = menu_p();
 		switch(op_menu_p){
 			case 0: {
 				system("cls");
 				saida();
				break;
			}
 			case 1:{
 				do{
 					op_menu_1 = menu_1();
			 		switch(op_menu_1){
			 			case 0:{
			 				voltar_menu_p();
							break;
						}
						
						case 1:{
							system("cls");
							printf(" Opcao para ordenacao do vetor de forma crescente.\n\n ");
							array_crescente();
							getch();
							break;
						}
						case 2:{
							system("cls");
							printf(" Opcao para ordenacao do vetor de forma decrescente.\n\n ");
							array_decrescente();
							getch();
							break;
						}
						case 3:{
							system("cls");
							printf(" Opcao para a soma de todos os valores.\n\n ");
							soma_array();
							getch();
							break;
						}
						default: {
							invalida();
							break;
						}
					 }
			 	}while(op_menu_1 != 0);
				break;
			}
			case 2:{
				system("cls");
				printf("Formulas Matematicas\n\n");
				do{
 					op_menu_2 = menu_2();
			 		switch(op_menu_2){
			 			case 0:{
			 				voltar_menu_p();
							break;
						}
						
						case 1:{
							system("cls");
							printf(" Areas.\n\n ");
							do{
			 					op_menu_3 = menu_3();
						 		switch(op_menu_3){
						 			case 0:{
						 				voltar_menu_a();
										break;
									}
									
									case 1:{
										system("cls");
										printf(" Circulo.\n\n ");
										a_circulo();
										getch();
										break;
									}
									case 2:{
										system("cls");
										printf(" Triangulo.\n\n ");
										a_triangulo();
										getch();
										break;
									}
									case 3:{
										system("cls");
										printf(" Retangulo.\n\n ");
										a_retangulo();
										getch();
										break;
									}
									default: {
										invalida();
										break;
									}
								 }
						 	}while(op_menu_3 != 0);
							break;
						}
						case 2:{
							system("cls");
							printf(" Volumes.\n\n ");
														do{
			 					op_menu_4 = menu_4();
						 		switch(op_menu_4){
						 			case 0:{
						 				voltar_menu_a();
										break;
									}
									
									case 1:{
										system("cls");
										printf(" Piramide.\n\n ");
										v_piramide();
										getch();
										break;
									}
									case 2:{
										system("cls");
										printf(" Cubo.\n\n ");
										v_cubo();
										getch();
										break;
									}
									case 3:{
										system("cls");
										printf(" Esfera.\n\n ");
										v_esfera();
										getch();
										break;
									}
									default: {
										invalida();
										break;
									}
								 }
						 	}while(op_menu_4 != 0);
							break;
						}
						case 3:{
							system("cls");
							printf(" Formula Resolvente.\n\n ");
							resolvente();
							getch();
							break;
						}
						default: {
							invalida();
							break;
						}
					 }
			 	}while(op_menu_2 != 0);
				break;
			}
			default: {
				invalida();
				break;
			}
		 }
	 }while(op_menu_p != 0);
 }
 