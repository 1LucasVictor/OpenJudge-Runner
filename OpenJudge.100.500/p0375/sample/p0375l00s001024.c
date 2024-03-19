#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		if(i%3==0){
			printf(" %d",i);
		}else{
			for(int x=i;x>0;x/=10){
				if(x%10==3){
					printf(" %d",i);
				}
			}
		}
	}
	printf("\n");
}

