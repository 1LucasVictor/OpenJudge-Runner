#include <stdio.h>
#include <stdlib.h>

int main()
{
	char S[100000];
	scanf("%s", S);

	int i, res;
	for(i=0; S[i]!='\0'; i++){
		res += (S[i]-'0')*2-1;
	}
	printf("%d\n", i-abs(res));
	return 0;
}
