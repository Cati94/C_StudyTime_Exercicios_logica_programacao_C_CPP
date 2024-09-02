/* Exercício Final 
Catarina Costa, 15 de marco de 2022  */
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<conio.h>
 #include<math.h>
 #define PI 3.1415 // é como uma variável global, pode ser chamada em qualquer função
 
 /* Função para mostrar o menu principal e devolver a opção */
 int menup(){
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
 int menu1(){
 	int op;
 	
 	system("cls");
	printf("***********************************************\n");
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
	printf("\t\t opcao nao existe !");
	getch();
 }
 
 
 void voltarmenup(){
 	system("cls");
	printf("****************** Voltar ao menu principal ********************\n");
	getch();
 }

void voltarmenua(){
 	system("cls");
	printf("****************** Voltar ao menu anterior ********************\n");
	getch();
 }

void saida(){
 	system("cls");
	printf("****************** Sair, obrigada ********************\n");
	getch();
 } 
 
   /* Função para mostrar o menu 2 das Fórmulas Matemáticas e devolver a opção */
 int menu2(){
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
 int menu3(){
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
 int menu4(){
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
 void acirculo()
{
 	float raio, area;
	
	do
	{
		printf("\n Insira o raio do circulo: ");
 		scanf("%f", &raio);
 	}
 	while (raio <= 0);
 	
 	area = PI * raio * raio; // area = PI * pow(raio, 2); 
 	
 	printf("\n A area do circulo e: %.2f", area);
}

// função da área do triângulo
 void atriangulo()
{
 	float base, altura, areat;
	
	do
	{
		printf("\n Insira a base do triangulo: ");
 		scanf("%f", &base);
 		printf("\n Insira a altura do triangulo: ");
 		scanf("%f", &altura);
 	}
 	while (base <= 0 || altura <= 0);
 	
 	areat = base * altura; 
 	
 	printf("\n A area do triangulo e: %.2f", areat);
}


// função da área do rectângulo
 void aretangulo()
{
 	float l1, l2, arear;
	
	do
	{
		printf("\n Insira o primeiro lado do retangulo ");
 		scanf("%f", &l1);
 		printf("\n Insira o segundo lado do retangulo ");
 		scanf("%f", &l2);
 	}
 	while (l1 <= 0 || l1 == l2);
 	
 	arear = l1 * l2; 
 	
 	printf("\n A area do retangulo eh: %.2f", arear);
}


//função v_piramide
void vpiramide()
{
 	float base1, base2, areabase, altura, volumep;
	
	printf("Volume da piramide = (Area da base x altura) / 3");
	
	//Calcular primeiro a área da base da pirâmide
	do
	{
		printf("\n Insira a o primeiro lado da base da piramide ");
 		scanf("%f", &base1);
 		printf("\n Insira o segundo lado da base da piramide ");
 		scanf("%f", &base2);
 	}
 	while (base1 <= 0);
 	
 	areabase = base1 * base2; 
 	
 	printf("\n A area da base e: %.2f", areabase);


	//Depois, pedir a altura e, a partir daí, calcular o volume
	do
	{
		printf("\n Insira altura da piramide ");
 		scanf("%f", &altura);
 		
 	}
 	while (altura <= 0);
 	
 	volumep = (areabase * altura) / 3; 
 	
 	printf("\n O volume da piramide eh: %.2f", volumep);
}


// função do volume do cubo
 void vcubo()
{
 	float aresta, volumecubo;
	
	do
	{
		printf("\n Insira a dimensao da aresta ");
 		scanf("%f", &aresta);
 	}
 	while (aresta <= 0);
 	
 	volumecubo = aresta * aresta * aresta; 
 	
 	printf("\n O volume do cubo e: %.2f", volumecubo);
}


// função do volume da esfera
 void vesfera()
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
void arraycrescente()
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

// funcao array decrescente
void arraydecrescente()
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

// função soma do array
void somaarray()
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
 	
 	printf("\n A soma do array e: %d", soma);
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
			printf("\n\t ERRO! Numero Nulo.");
		}
	}
	while(A == 0);
	
	printf("Insira o valor de B: ");
	scanf("%f", &B);
	printf("Insira o valor de C: ");
	scanf("%f", &C);
	
	DELTA = (B * B) - (4 * A * C);
	printf("\n O DELTA e %.2f", DELTA);

	if (DELTA < 0)  
	{
		printf("\n A equacao nao tem solucao!");
	}
	else if (DELTA == 0)
	{
		X = -B / (2 * A);
		printf("\n A raiz da equacao e %.2f", X);
	}
	else
	{
		R1 = (-B - sqrt(DELTA))/(2 * A);
		printf("\n A 1a raiz da equacao e %.2f", R1);
		
		R2 = (-B + sqrt(DELTA))/(2 * A);
		printf("\n A 2a raiz da equacao e %.2f", R2);
	}
}



 // função principal do programa
 main(){
 	int opmenup, opmenu1, opmenu2, opmenu3, opmenu4;
 	
 	do{
 		opmenup = menup();
 		switch(opmenup){
 			case 0: {
 				system("cls");
 				saida();
				break;
			}
 			case 1:{
 				do{
 					opmenu1 = menu1();
			 		switch(opmenu1){
			 			case 0:{
			 				voltarmenup();
							break;
						}
						
						case 1:{
							system("cls");
							printf(" Opcao para ordenacao do vetor de forma crescente.\n\n ");
							arraycrescente();
							getch();
							break;
						}
						case 2:{
							system("cls");
							printf(" Opcao para ordenacao do vetor de forma decrescente.\n\n ");
							arraydecrescente();
							getch();
							break;
						}
						case 3:{
							system("cls");
							printf(" Opcao para a soma de todos os valores.\n\n ");
							somaarray();
							getch();
							break;
						}
						default: {
							invalida();
							break;
						}
					 }
			 	}while(opmenu1 != 0);
				break;
			}
			case 2:{
				system("cls");
				printf("Formulas Matematicas\n\n");
				do{
 					opmenu2 = menu2();
			 		switch(opmenu2){
			 			case 0:{
			 				voltarmenup();
							break;
						}
						
						case 1:{
							system("cls");
							printf(" Areas.\n\n ");
							do{
			 					opmenu3 = menu3();
						 		switch(opmenu3){
						 			case 0:{
						 				voltarmenua();
										break;
									}
									
									case 1:{
										system("cls");
										printf(" Circulo.\n\n ");
										acirculo();
										getch();
										break;
									}
									case 2:{
										system("cls");
										printf(" Triangulo.\n\n ");
										atriangulo();
										getch();
										break;
									}
									case 3:{
										system("cls");
										printf(" Retangulo.\n\n ");
										aretangulo();
										getch();
										break;
									}
									default: {
										invalida();
										break;
									}
								 }
						 	}while(opmenu3 != 0);
							break;
						}
						case 2:{
							system("cls");
							printf(" Volumes.\n\n ");
														do{
			 					opmenu4 = menu4();
						 		switch(opmenu4){
						 			case 0:{
						 				voltarmenua();
										break;
									}
									
									case 1:{
										system("cls");
										printf(" Piramide.\n\n ");
										vpiramide();
										getch();
										break;
									}
									case 2:{
										system("cls");
										printf(" Cubo.\n\n ");
										vcubo();
										getch();
										break;
									}
									case 3:{
										system("cls");
										printf(" Esfera.\n\n ");
										vesfera();
										getch();
										break;
									}
									default: {
										invalida();
										break;
									}
								 }
						 	}while(opmenu4 != 0);
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
			 	}while(opmenu2 != 0);
				break;
			}
			default: {
				invalida();
				break;
			}
		 }
	 }while(opmenup != 0);
 }
 