#include <iostream>


using namespace std;

int main ()
{
  //variaveis
  int anoInicial;
  int anoFinal;
  double taxaInicial;
  double valorInicial;
  double valorCorrente;
  double taxaCorrente;
  int anoCorrente;
  
  //entrada de dados do utilzador
  cout << ("Digite o ano inicial \n");
  cin >> anoInicial;
  cout << ("Digite o ano final \n");
  cin >> anoFinal;
  cout << ("Digite a taxa inicial \n)";
  cin >> taxaInicial;
  cout << ("Digite o valor inicial \n");
  cin >> valorInicial;
  
  //operaçoes
  while (anoCorrente != anoFinal)
  {
	  anoCorrente++;
	  taxaCorrente = taxaCorrente - 0.5;
	  if (taxaCorrente => 5.0);
	  {
		  valorCorrente = (valorCorrente*taxaCorrente);
	  }
	  else
	  {
		  valorCorrente = (valorCorrente*5.0);
	  }
  }
  
  //saida
  cout << ("Valor Final é", &valorCorrente);
  
}