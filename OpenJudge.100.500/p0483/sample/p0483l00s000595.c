#include <stdio.h>

int main(void)
{
	int N,i;
	scanf("%d",&N);
	if(N%10==7){
		printf("Yes");
	}else{
		i=N%10;
		N=N-i;
		if(N%100==70)printf("Yes");
		else{
			i=N%100;
			N=N-i;
			if(N%1000==700)printf("Yes");
			else printf("No");
		}
	}
	return 0;
}