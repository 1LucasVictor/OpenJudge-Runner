#include<stdio.h>
int main (void){
	long long int h,n,a[100000],i,x=0;
	scanf("%lld %lld",&h,&n);
	for(i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		x+=a[i];
	}
	if(h<=x){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
}