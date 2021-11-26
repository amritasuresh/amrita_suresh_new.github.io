#include <unistd.h>
#include <stdio.h>
#include<sys/wait.h>
#include<fcntl.h>

int main(){

	int err = execlp("ping", "ping", "-c", "5", "google.com", NULL);
	if (err == -1){
			printf("Could not found program to execute! \n");
			return 2;
		}


	return 0;
}