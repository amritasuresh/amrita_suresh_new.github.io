#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// just un programme trivial qui montre l'effet de mémoire virtuel
//  - compiler le programme: make input
//  - ouvrir deux terminaux, puis dans les deux:
//    * lancer le debugguer: gdb ./input
//    * faire gdb arrêter dans foo: break foo
//    * lancer le programme avec paramètre: run x  (pour x=1,2)
//    * afficher la valeur et l'adresse de x: print x   et   print &x

int x;

void foo ()
{
		sleep(1);
}

int main(int argc,char **argv)
{
        x = atoi(argv[1]);
	while (1) { foo(); }
}
