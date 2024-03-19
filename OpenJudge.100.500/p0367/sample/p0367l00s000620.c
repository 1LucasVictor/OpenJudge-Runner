#include<stdio.h>
int main(void){
	
	int a,b,c;
	int i;
	int m,n=0;
	
	scanf("%d %d %d",&a,&b,&c);
	
	m=b-a+1;
	
	for(i=0;i<m;i++){
		
		if(c%a==0)n++;
		
		a++;
		
	}
	
	printf("%d\n",n);
	
	return 0;
	
}
