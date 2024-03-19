#include<stdio.h>

int main(void)
{
	int a,b,x,i,j;
	
	scanf("%d %d %d",&a,&b,&x);
	
	if(a<b){
    	i = a;
    	a = b;
    	b = i;
	}
	
	for(j = 2; j <= x; j++){
		if(a%j==0 && b%j==0){
			printf("%d\n",j);
		}
	}
	
	return 0;
}