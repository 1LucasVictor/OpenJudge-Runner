#include<stdio.h>
int main(void)
{
	int n,i,a,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a%2==0){
			if(a%3!=0&&a%5!=0){
				f=1;
			}
		}
	}
	if(f==1){
		printf("DENIED\n");
	}
	else{
		printf("APPROVED\n");
	}
	return 0;
}