#include <unistd.h>
#include <stdio.h>
#include<sys/wait.h>
#include<fcntl.h>

int main(){

	int fid = fork();

	if (fid == -1){
		printf("Error in fork");
		return 1;
	}
	else if (fid == 0){
		//Child process
		int file = open("pingReader.txt", O_WRONLY | O_CREAT, 0777);
		if (file == -1){
			printf("Could not open file successfully! \n");
			return 3;		
		}
 
		printf("Original file descriptor assigned to pingReader was %d \n", file); //Print statement to see original file descriptor
		
		int file2 = dup2(file, 1);
		close(file);

		int err = execlp("ping", "ping", "-c", "5", "google.com", NULL);

		if (err == -1){
			printf("Could not found program to execute! \n");
			return 2;
		}
	}
	else{
		//Parent process
		wait(NULL); //function waits for any 1 child process to end
		printf("Line after the ping \n");
	}

	return 0;
}