#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ret, N;
	int nmod;
	ret = scanf("%d", &N);

	nmod = N % 10;
	switch (nmod) {
	case 2:
	case 4:
	case 5:
	case 7:
	case 9:
		printf("hon\n");
		break;
	case 0:
	case 1:
	case 6:
	case 8:
		printf("pon\n");
		break;
	case 3:
		printf("bon\n");
	}
	
	fflush(stdout);
	return EXIT_SUCCESS;
}
