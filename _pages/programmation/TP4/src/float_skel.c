// This program corresponds to Question 3 (to be completed).

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int signe;
	int exposant;
	int mantisse;
} fc;

//3.1 decompose a float into its components 
fc decompose (float f)
{
	fc a;
	unsigned int i = *(int*)(&f);

	// replace the three following instructions
	a.signe = 0;
	a.exposant = 0;
	a.mantisse = 0;

	printf("int value is %d\n",i);

	return a;
}

// 3.2 compose a float from its components
float compose (fc a)
{
	unsigned int i;

	// replace the following instruction
	i = 0;

	return *(float*)(&i);
}

// 3.3 this function should perform the floating point addition,
// under the assumption that the operands are both positive
fc addition (fc a, fc b)
{
	fc c;
	if (a.signe || b.signe) 
	{
		fprintf(stderr,"erreur: signe négatif\n");
		exit(1);
	}

	// we ensure that the exponent of a is the greatest
	if (a.exposant < b.exposant) { c = a; a = b; b = c; }

	// insert the correct instructions for the calculation (we write in c)
	// ...

	return c;
}

// display the components of a structure
void affiche (fc a)
{
	printf("sign = %d, exponent = %d (0x%x), mantisse = %d (0x%x)\n",
		a.signe, a.exposant, a.exposant, a.mantisse, a.mantisse);
}

// main method
int main ()
{
	float f,g;
	fc a,b,c;

	printf("Give me a (float) value : ");
	scanf("%f",&f);
	a = decompose(f);
	affiche(a);
	g = compose(a);
	printf("float value is %f\n",g);

	printf("\nAnd another : ");
	scanf("%f",&g);
	b = decompose(g);
	affiche(b);

	printf("\nResult of the addition:\n");
	c = addition(a,b);
	affiche(c);
	printf("which represents %f\n",compose(c));
}