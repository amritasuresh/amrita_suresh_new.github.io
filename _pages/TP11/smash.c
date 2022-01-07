#include <stdio.h>

// "Mystery" program.

// For the "right" values of D and J (which depend on details of
// the compiler and the machine architecture), the program will
// output "x=0".

#define D 6
#define J 10

void foo()
{
	int a[1];
	a[D] += J;
}

void main()
{
	int x;

	x = 0;
	foo();
	x = 1;
	printf("x=%x\n",x);
}
