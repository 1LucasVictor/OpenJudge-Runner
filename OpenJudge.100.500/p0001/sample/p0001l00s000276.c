#include<stdio.h>
int main(){
	int n,k;
	while(scanf("%d%d",&n,&k)!=EOF){
		n=n+k;
		k=0;
		while(n!=0){
			n=n/10;
			++k;
		}
		printf("%d\n",k);
	}
	return 0;
}
