#include<stdio.h>
int main()
{
	char S[4];
	int i, j, ans=0;
	for(i = 0; i < 4; ++i){
	scanf("%c", &S[i]);
	}
	for(i = 0; i < 4; ++i) {
		for(j = 0; j < 4; ++j) {			
		if(S[i] == S[j]) {
				ans +=1;
			}
		}
	}
	if(ans == 8) {
		printf("Yes");
	}
	else printf("No");
	return 0;
}
