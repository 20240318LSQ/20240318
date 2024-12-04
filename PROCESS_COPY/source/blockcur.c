#include <process_copy.h>

int blockcur(char* filename, int pronum)
{
	int fd;
	fd = open("filename",O_RDONLY);
	int size = lseek(fd,0,SEEK_END);
	int blocksize = size/pronum;
	if(size%pronum != 0)
	{
       blocksize++;
	}
	return blocksize;


}
