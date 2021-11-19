#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main (int argc, char ** args)
{
	int x,y;

	printf ("Give an integer : ");
	scanf("%d",&x);
	printf ("Give another : ");
	scanf("%d",&y);

	if (fork())	// parent process
	{
		int s;
		// get the sum from the child process ... to be completed
		printf("Le resultat de l'addition est %d\n",s);

		exit(0); // exit
	}

	else		// child process
	{
		int z = x+y;
		// communicate the result to the parent process, and exit... to be completed
	}
}
