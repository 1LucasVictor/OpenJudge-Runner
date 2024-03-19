#include<stdio.h>
int main(void){
	int n,i,r=1;
	scanf("%d",&n);
	for(i=9;i;i--){
		if(n%i==0){
			r-=10<=n/i;
			break;
		}
	}
	printf(r?"Yes":"No");
	return 0;
}
