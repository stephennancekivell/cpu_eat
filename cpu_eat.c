#include "stdio.h"
#include "time.h"

void eat(int seconds){
	time_t start,end;
	start = time(NULL);
	int i=0;

	do{
		for (i=0; i< 10000;i++);
		end = time(NULL);
	} while (end-start < seconds);
}

void main(int argc, char* argv[]){
	int seconds = 1;
	printf("usage: %s [SECONDS]\n",argv[0]);
	printf("SECONDS default: 1\n");

	if (argc == 2){
		seconds = atoi(argv[1]);
	}
	eat(seconds);
}
