#include <stdio.h>

int main ()
{
/* declaracao das variaveis*/
int votoa;
int votob;
int votoc;
int votod;
char voto;
total=5;
// fim da declaracao de variaveis*//

// Bloco do utilizador*//
for(int itr=0;itr<=5;itr++)
{
printf("insira o caracter do seu voto /n");
scanf("%c", &voto);
switch (voto)
{
    case 'a':
      votoa++;
      break;

    case 'b' :
		votob++;
      break;
	  
	  case 'c':
      votoc++;
      break;
	case 'd':
      votod++;
      break;
    
    default:
      // default statements
      break;
}
printf("o numero de votos A: %d ", votoa);
printf(" o numero de votos b: %d ", votob);
printf(" o numero de votos c: %d ", votoc);
printf(" o numero de votos d:  %d ", votod);
return 0;
}