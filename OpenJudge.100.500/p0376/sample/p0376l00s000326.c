#include<stdio.h>
int main()
{
	int b,c,d,t,a[120];
	
	scanf("%d",&b);
	for(c=1;c<=b;c++){
		scanf("%d",&a[c]);
	}	
	for(c=b;c>=1;c--){
		if(c==b)
			printf("%d",a[c]);
		else 
			printf(" %d",a[c]);
		
	}	
	printf("\n");
	
	return 0;
}