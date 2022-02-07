#include <stdio.h>
#include <stdlib.h>
#include <sys/utsname.h>

#include "qfetch.h"

void
info()
{
	struct utsname info;

  	if (uname(&info) < 0)
	{
		printf("Can't get the system information\n");
		exit(EXIT_FAILURE);
	}

  	else
	{
		printf("\033[33m ___ \033[m\t\033[36m___________________\033[m\n");
    		printf("\033[33m|   |\033[m\tsystem   \033[33m=>\033[m %s\n", info.sysname);
    		printf("\033[33m|   |\033[m\thostname \033[33m=>\033[m %s\n", info.nodename);
    		printf("\033[33m|   |\033[m\tkernel   \033[33m=>\033[m %s\n", info.release);
		printf("\033[33m|   |\033[m\tarch     \033[33m=>\033[m %s\n", info.machine);
		printf("\033[33m|___|\033[m\t\033[36m___________________\033[m\n");

  	}

	printf("\n");
}

