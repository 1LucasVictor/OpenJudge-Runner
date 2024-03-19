#include <stdio.h>

int main(void)
{	
	int a,b,add,cnt=0;

	while(scanf("%d%d",&a,&b)!=EOF){
		add=a+b;
		for(cnt=0; add!=0; add/=10)
			cnt++;
		printf("%d\n",cnt);
	}

	return 0;
}