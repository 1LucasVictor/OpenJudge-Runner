#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char line[128];
	fgets(line, 128, stdin);
	int num = atoi(line);
	switch(num % 10) {
		case 3:
			printf("bon\n");
			break;
		case 0: case 1: case 6: case 8:
			printf("pon\n");
			break;
		default:
			printf("hon\n");
	}
    return EXIT_SUCCESS;
}

