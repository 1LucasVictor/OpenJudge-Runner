#include<stdio.h>

int main(){
  	int n,a,b,ans;
  	scanf("%d%d%d",&n,&a,&b);
  	ans=(n*a<=b)?n*a:b;
  	printf("%d",ans);
	return 0;
}
