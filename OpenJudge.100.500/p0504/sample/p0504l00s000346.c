#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int t=1;
	int m,n;
	for(m=1;m<=a*b;m++){
		if(m*b<a)
		t++;
	}
 		printf("%d",t);
	return 0;
} 