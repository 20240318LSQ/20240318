#include <process_copy.h>

int main(int argc,char*argv[])
{
	int pronum = atoi(argv[3]);
	if(pram_check(argv[1],pronum,6)!=0)
	{
        int blocksize=blockcur(argv[1],pronum);
		if(blocksize==0)
		{
			printf("blocksize fail\n");
		}
		else
		{
			process_create(argv[1],argv[2],pronum,blocksize);
		}
	}
	else
	{
		printf("check fail\n");
	}
	return 0;
}
