
// Logical and increment operators in C languague - Puzzle book //

#include <stdio.h>
#define print(int) printf("%d\n",int)
int main ()
{
	int x,y,z;
	x=2; y=1; z=0;
	x=x && y || z; 
	print(z);
	print(x||!y&& z);
	
	x=y=1;
	z=x ++ -1; 
	print(x); print(z);
	z+= -x++ + ++y; 
	print(x);print(z);
	z=x/++x;
	print(z);
}