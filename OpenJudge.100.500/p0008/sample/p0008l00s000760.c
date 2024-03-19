#include <stdio.h>

int main(void)
{
	int i,j,n,count=0;
	while(scanf("%d",&n)!=EOF){
		for(i=2;i<=n;i++){
			int division=0;
			for(j=1;j<=i;j++){
				if(i%j==0) division++;
			}
			if(division==2) count++;
		}
		printf("%d\n",count);
		count=0;
	}
	return 0;
}