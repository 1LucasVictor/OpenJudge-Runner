#include<stdio.h>
int main()
{
	int n,a[100];
	int i,x=0,y=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			x++;
			if(a[i]%3==0||a[i]%5==0){
				y++;
			}
		}
	}
	if(x==y){
		printf("APPROVED\n");
	}
	else{
		printf("DENIED\n");
	}
	return 0;
}
