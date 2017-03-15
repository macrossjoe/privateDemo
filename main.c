#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char name[128];

	sprintf(name, "What is your name?\n");
	printf(name);
	scanf("%s", name);
	printf("Hello %s!\n", name);
  	printf("May the FORCE be with you, %s!\n", name);

	return 0;
}
