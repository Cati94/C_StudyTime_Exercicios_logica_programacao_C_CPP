
// Relacional and Condicional Operators in C language - puzzle book //

#include <stdio.h>
#define print(int) printf("int =%d\n", int)

int main () {
	int x=1, y=1, z=1;
	x+=y+=z;
	print(x<y?y:x); // CONDICIONAL OPERATORS: ? - MEAN if (true)   : - MEAN else  (false) //
	print(x<y?x++:y++); // ++ - increment value 1 (+1)//
	print(x);
	print(y);

	print(z+=x<y?x++:y++);
	print(y);
	print(z);

	x=3; y=z=4;
	print((z>=y>=x)?1:0); // two condicions are true it´s 1 if one false it´s 0 //
	print(z>=y && y>=x); // All it´s true && in this case it´s 1 // 

}