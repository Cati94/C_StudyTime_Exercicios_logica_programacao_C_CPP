#include <stdio.h>
int main()
{
    //declaração de variaveis
	float base;
    double altura;
	float area;
	//fim de bloco
	
	//bloco de ES do utilizador
    printf("Insira a Base: ");
    scanf("%f", &base);
    printf("Insira a altura: ");
    scanf("%lf", &altura);
	//fim de bloco

	//bloco de processamento da area
	area = base * altura;
	//fim de bloco
	
	
	
	//Bloco de output
    printf("base = %f\n", base);
    printf("altura = %lf\n", altura);
    printf("area = %f\n", area);
    //fim de bloco

    return 0;
}
