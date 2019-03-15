#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

int sh_launch(char **args)
{
    pid_t pid;
    int status;

    pid = fork();

    if(pid < 0)
	return -1;

    if(pid == 0)
    {
	execvp(args[0], args);
	exit(EXIT_FAILURE);
    }
    else
    {
	wait(&status);
    }

    return 1;
}
