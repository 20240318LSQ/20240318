#include <process_copy.h>

int main(int argc, char* argv[])
{
	int fd_src = open(argv[1],O_RDONLY);
	int fd_des = open(argv[2],O_WRONLY);

	int blocksize = atoi(argv[3]);
	int offset = atoi(argv[4]);

	lseek(fd_src,offset,SEEK_SET);
	lseek(fd_des,offset,SEEK_SET);

	char buffer[blocksize];
	int len = read(fd_src,buffer,sizeof(buffer));
	write(fd_des,buffer,len);
    
	printf("child copy success: pid %d, offset %d, blocksize %d\n",getpid(),offset,blocksize);

	close(fd_src);
	close(fd_des);
	return 0;
}
