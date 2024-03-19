#include <stdio.h>
int main(void){
	int n,i,s;
	for(;~scanf("%d",&n);printf("%d\n",n?s:1))
		for(s=i=0,n=fmin(n,36-n);i++<=n;s+=i*-~i/2);
	return 0;
}