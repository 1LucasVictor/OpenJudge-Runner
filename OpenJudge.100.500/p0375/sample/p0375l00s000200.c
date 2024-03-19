#include<stdio.h>
int main(void){
	int i,n,s;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=i;
		while(s>=40){
			s/=10;
		}
		if(s%3==0||s%10==3||s/10==3){
			printf(" %d",i);
		}
	}
	printf("\n");
	return 0;
}