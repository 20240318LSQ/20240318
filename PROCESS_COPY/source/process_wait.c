#include <process_copy.h>

int process_wait(void)
{
	pid_t pid;
	int status;
	while((pid = waitpid(-1,NULL,WNOHANG))!=-1)
	{
		if(pid > 0)
		{
			printf("parent wait success ,pid %d\n",getpid());
		}
		else{
			sleep(1);
		}
	}
}
