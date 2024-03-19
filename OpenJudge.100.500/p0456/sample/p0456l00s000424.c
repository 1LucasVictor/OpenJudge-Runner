#include <stdio.h>

int main(void){
	char s[1000000], t[1000000];
	scanf("%s", s);
	scanf("%s", t);
	int count = 0;
	for(int i = 0; s[i]; i++)
		if(s[i] != t[i])count++;
	printf("%d\n", count);
	return 0;
}

