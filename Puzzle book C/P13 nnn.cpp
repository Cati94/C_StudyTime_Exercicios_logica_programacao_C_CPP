
// Operator Precedence and Evaluation in c langugae - puzzle book //

// ......................IMPORTANT NOTES:.......................... //
// && - Logical means AND - Is true (1) if all operatores are true.//
// || - Logical means OR  - Is true (1) if one operatores are true.//
// ...............................................................//

#include <stdio.h>
#define print3(x,y,z) printf("x=%d\ty=%d\n",x,y,z)

int main(){
	int x,y,z;
	x=y=z=1;
	++x|| ++y && ++z; // 2-1-1- os operadores sao falsos portanto 0+1 em y e z. // 
	print3(x,y,z);
	
	x=y=z=1;
	++x && ++y || ++z; // 2-2-1 os operadores sao verdadeiros e o ultimo e falso //
	print3(x,y,z);
	
	
}