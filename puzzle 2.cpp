
// Assignment Operators in C languague - Puzzle book //

#include <stdio.h>
#define printx printf("%d\n", x)
int main ()
{
	int x=2,y,z;
	
	x*=3+2;
	printx;
	
	x*=y=z=4;
	printx;
	
	x=y==z;
	printx;
	
	x==(y=z);
	printx;
}