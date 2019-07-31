#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	pid_t id = fork();
	if(id < 0)
	{
		printf("fork error\n");
	}
	else if(id == 0)
	{
		printf("child is runnning..., pid : %d\n", getpid());
		sleep(5);
		exit(13);
	}
	else
	{
		printf("parent is running..., ppid : %d\n", getppid());
		int status = 0;
		pid_t ret = waitpid(-1, &status, 0);
	    if(ret < 0)
		{
			printf("wait error\n");
		}
		else
		{
			printf("success!\n");
			sleep(5);
		}
	}
	return 0;
}
