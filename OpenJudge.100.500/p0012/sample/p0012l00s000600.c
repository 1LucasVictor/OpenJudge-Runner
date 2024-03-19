#include<stdio.h>
int main(void){
	int a,b,c,d,i,t,n;
	int s[10];
	c=0;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			printf("%d\n",s[c-1]);
			c--;
		}else{
			s[c]=n;
			c++;
		}
	}
	return 0;
}
