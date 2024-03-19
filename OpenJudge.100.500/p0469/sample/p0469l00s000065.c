#include <stdio.h>

int main(){
	int i, k, a, b;
	scanf("%d",&k);
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++) if(i%k==0) {
		puts("OK");
		return 0;
	}
	puts("NG");
}