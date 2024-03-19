#include <stdio.h>

int main(int argc, char const *argv[])
{
int i, sum;
char x[1000];

for(;;) {
	scanf("%s", &x);
	if(x[0] == '0') break;

	sum = 0;
	for(i = 0; x[i] != '\0'; i++) {
		sum += x[i] - '0';
	}
	printf("%d\n", sum);

}


	return 0;
}

