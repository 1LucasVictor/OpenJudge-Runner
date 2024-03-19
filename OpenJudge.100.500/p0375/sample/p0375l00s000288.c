#include <stdio.h>
int main(void)
{
	int i,n,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		x=i;
		if(x%3==0) printf(" %d",i);
		else if(x%10==3) printf(" %d",i);
		else{
			x/=10;
			if(x!=0){
				if(x%10==3) printf(" %d",i);
			}
		}
	}
	printf("\n");
	return 0;
}