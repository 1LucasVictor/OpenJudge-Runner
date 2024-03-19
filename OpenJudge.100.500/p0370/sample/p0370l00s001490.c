#include<stdio.h>
int main(){
	int n,k;
	char a;
	while(1){
		scanf("%d %c %d",&n,&a,&k);
		if(a=='+')n+=k;
		if(a=='-')n-=k;
		if(a=='*')n*=k;
		if(a=='/')n/=k;
		if(a=='?')break;
		printf("%d\n",n);
	}
	return 0;
}
