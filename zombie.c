#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	pid_t pid;

	pid = fork();

	if (pid < 0) { /* error occurred */ 
		fprintf(stderr, "Fork Failed"); 
		return 1;
	}
	else if (pid == 0) { /* child process */
	/* just need to exit out of the child process */
		return 0;
	}
	else { /* parent process */
		/* parent will wait for the child to complete */
		sleep(15);
		printf("\nParent Exiting Now\n");
		return 0;
	}

	
}
