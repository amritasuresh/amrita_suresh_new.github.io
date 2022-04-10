// délai moyen avant reception d'un message
#define DELAY 1.0

// les messages
#define MSG_VOISIN 'v'
#define MSG_PROCHAIN 'p'
#define MSG_GAGNANT 'g'

#include "ring-pipe.h"

// Comportement d'un nœud.

// Cette fonction est censé appeler exit() quand le gagnant est connu,
// avec l'identifiant du gagnant comme code de sortie.

void protocole (int id)
{
	int actif = 1;

	message("Mon identifiant est %d",id);

	envoyer(MSG_VOISIN,id);	// envoyer son identifiant au voisin

	while (1)
	{
		// accepter un message
		char c; int d;
		recevoir(&c,&d);

		if (!actif){
			//forward all messages
			envoyer(c, d);
			if(c == MSG_GAGNANT){
				printf("%d is the winner\n", d);
				exit(d);
			}
			continue;
		}

		// évaluer le message et réagir, à compléter

		if (c == MSG_VOISIN)
		{
			neighbour = d;
			envoyer(MSG_PROCHAIN, d);
			printf("[%d] I received from neighbour %d", id, d);
		}
		else if (c == MSG_PROCHAIN)
		{
			message("ids received this round = (%d,%d,%d)",id,neighbour,d);

			if (id == d && neighbour >= d)  {
				//id = neighbour;
				envoyer(MSG_GAGNANT, d);
				printf("I am the winner %d!\n", d);
				exit(d);
			}
			else if (neighbour > d && neighbour > id){
				printf("[%d] Still active\n", id);
				envoyer(MSG_VOISIN, id);
			}

			else{
				actif = 0; //becomes inactive
				printf("[%d] I have become passive\n", id);
			}
		}
		else if (c == MSG_GAGNANT)
		{
			if(d != id)
				printf("I am active, but received another winner. Error? %d>%d\n", d, id);
				exit(id);
		}
	}
}

int main (int argc, char **argv)
{
	int i, n, status;

	if (argc != 2)
	{
		fprintf(stderr,"usage: ring <n>\n");
		exit(1);
	}

	// Générer les n clients. Chaque client est un processus fils
	// qui appelera protocole() avec les données dans struct node
	// préremplies.
	n = atoi(argv[1]);
	genere_noeuds(n);

	// On attend la terminaison de tout le monde pour affecter le gagnant.
	for (i = 0; i < n; i++) wait(&status);
	status = WEXITSTATUS(status);
	printf("[main] %d gagne\n",status);
	exit(status);
}
