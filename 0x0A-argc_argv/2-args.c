#include <stdio.h>
/**
* Task 2
* main- program prints all arguments it receives followed by a new line
*/
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
