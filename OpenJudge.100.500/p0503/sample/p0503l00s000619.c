#include <stdio.h>
#include <string.h>

static struct{
	unsigned h : 1;
}obj[100010100];

int main()
{
	long i,N,tmp;
	i=0;
	scanf("%ld",&N);
	//for(i=0;i<100010100;i++)obj[i].h=0;
	for(i=0;i<N;i++){
		scanf("%ld",&tmp);
		//printf("%u ",obj[tmp].h);
		if(obj[tmp].h==0){
			obj[tmp].h=1;
		}
		else{
			printf("NO\n");
			return 0;
		}
	}
	
	printf("YES\n");
	return 0;
}