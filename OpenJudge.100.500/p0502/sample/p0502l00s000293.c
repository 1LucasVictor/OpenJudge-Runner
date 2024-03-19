#include<stdio.h>

int main(void)
{
	int i;
	int n;
	int t;
	int a[100];
	int score=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&t);
		a[i]=t;
	}
	
	for(i=0;i<n;i++){
		if(a[i]%2==1){
			score++;
		}else{
			if(a[i]%6==0 || a[i]%10==0)
				score++;
		}
	}
	if(score==n)
			printf("APPROVED");
	else
			printf("DENIED");
	
	return 0;
}
