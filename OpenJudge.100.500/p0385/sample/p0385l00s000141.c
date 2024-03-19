#include <stdio.h>

int main(int argc, char *args[])
{
	char mojiretsu_in[1001];
	int sum;
	int i;

	while(1) {
		scanf("%s", mojiretsu_in);

		if( mojiretsu_in[0] == 0x30 ) {
			break;
		}

		sum=0;
		i=0;

		while( mojiretsu_in[i] != 0 ) {
			sum += mojiretsu_in[i] - '0';
			i++;
		}

		printf("%d\n", sum);

	}


	return 0;

}