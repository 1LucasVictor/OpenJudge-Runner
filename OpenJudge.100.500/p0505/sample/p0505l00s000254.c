#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	int H;
	int N;
	int sum = 0;
	int i;
	char buf[128], *ch;
	char *buf_array;

	fgets(buf, sizeof(buf), stdin);
	ch = strtok(buf, " ");
	H = atoi(ch);
	ch = strtok(NULL, " ");
	N = atoi(ch);

	buf_array = (char *)calloc(N * 8, sizeof(char));

	fgets(buf_array, sizeof(buf_array), stdin);
	ch = strtok(buf_array, " ");
	sum += atoi(ch);
	for(i = 1; i < N; i += 1) {
		ch = strtok(NULL, " ");
		sum += atoi(ch);
	}

	if(H <= sum) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	free(buf_array);
	return 0;
}
