#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int t=0;
	int m,n;
	for(m=1;m<=10000;m++){
		if(m*b<a)
		++t;
	}
 		printf("%d",t+1);
	return 0;
} 