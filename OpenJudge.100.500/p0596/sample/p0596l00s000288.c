#include <stdio.h>
#include <stdlib.h>

int main()
{
	char S[131072];
	scanf("%s", S);

	int i, res;
	for(i=0; S[i]!='\0'; i++){
		if(S[i] == '0'){
			res--;
		} else if(S[i] == '1'){
			res++;
		}
	}
	printf("%d\n", i-abs(res));
	return 0;
}
