
// bitwise operators in c langugae - puzzle book //

#include <stdio.h>
#define print(int) printf("int=%d\n",int)
// | Bitwise or
// & Bitwise and 
// ^ bitwise XOR
// ~ bitwise compleent
// « sihft right //

int main (){
int x,y,z;
x=03; y=02; z=01;
print(x|y&z);
print(x|y&~z); // ~  --> Bitwise complement  -(n+1)//  
print(x^y & ~z); // ^ --> Bitwise exclusive XOR//
print (x&y&&z); // &&logical --> & Bitwise //
x=1; y=-1;
print(! x|x); // ! bitwise to no//
print(-x|x);
print(x^x);
x«=3;
print (x);
y«=3;
print(y);
y»=3; 
print(y);

}