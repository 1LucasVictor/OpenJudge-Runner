#include<stdio.h>
#include<math.h>
 
int main(void){
	int a,n,b;
	long  s;
	scanf("%d %d",&a,&n);
	b=pow(100,a);
	
	if(n==100)
	s=b*(n+1);
	
	else
		s=b*n;
	
	
	printf("%ld",s);
	}
		
		