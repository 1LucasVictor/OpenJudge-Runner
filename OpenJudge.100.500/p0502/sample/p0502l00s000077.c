#include<stdio.h>
int main()
{
	int n;
	int a[n];
	int i,x,y,flg;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[n]);
	}
	flg=0;
	for(i=0;i<n;i++){
		if(a[n]%2==0){
			a[n]+=a[n];
		}
		x=a[n]%3;
		y=a[n]%5;
		if(x==0||y==0){
			flg=1;
		}
	}
	if(flg==1){
		printf("APPROVED\n");
	}
	else{
		printf("DENIED\n");
	}
	return 0;
}
