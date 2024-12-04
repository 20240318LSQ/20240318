#include <process_copy.h>

int process_create(char* srcfile,char* destfile,int pronum, int blocksize)
{
	pid_t pid;
	int i;
	for(i=0;i<pronum;i++)
	{
		pid = fork();
		if(pid==0)
		{
			execl("home/colin/20240318/PROCESS_COPY/mod/copy","copy",NULL);
			break;
	    }
		process_wait();
	}
}
