#include<stdio.h>
int main(){
	int a=100000,b,n;
	scanf("%d",&n);
	for(b=0;b<n;b++){
		a=a*1.05;
		if(a!=(a/1000)*1000){a=(a/1000+1)*1000;}
	}
	printf("%d\n",a);
	return 0;
}