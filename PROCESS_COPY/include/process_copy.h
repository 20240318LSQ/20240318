#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>


int pram_check(char* filename, int argc, int pronum);
int blockcur(char* filename,int pronum);
int process_create(char* srcfile, char* desfile,int pronum, int blocksize);
int process_wait(void);
