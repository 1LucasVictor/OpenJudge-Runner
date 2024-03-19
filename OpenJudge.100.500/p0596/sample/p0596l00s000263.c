#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEBUG 0
#define NINF -1
#define PINF 1E9+1

#define MAX_LEN 100001

char *s;

int main()
{
	int n,num0,num1,i;
	s = (char *)malloc(sizeof(char) * MAX_LEN);
	if (s==NULL) {
		perror("malloc");
		exit(1);
	}
	scanf("%s",s);

	n = 0;
	num0 = 0;
	num1 = 0;
	for (i=0;i<MAX_LEN;i++) {
		if (s[i]=='\0' || s[i]=='\n') break;
		if (s[i]=='0') num0++;
		else           num1++;
		n++;
	}

	if (num0>num1) printf("%d\n",num1*2);
	else           printf("%d\n",num0*2);

	free(s);
	return 0;
}
