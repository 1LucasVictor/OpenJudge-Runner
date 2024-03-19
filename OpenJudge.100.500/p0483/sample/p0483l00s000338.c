#include<stdio.h>

int main(){
	int n,flag=0,t;
	scanf("%d",&n);
	while(n){
		t=n%10;
		if(t==7)flag=1;
		n/=10;
	}
	if(flag)printf("Yes");
	else printf("No");
	return 0;
} 