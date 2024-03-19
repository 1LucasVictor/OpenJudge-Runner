#include <stdio.h>
int main (void)
{  
	int b=0;
	int n=0;
	int a[100] = {0};
	
	scanf("%d",&b);
	for(n =1;n<=b;n++){
		a[n]=0;
	}
	for(n = 1;n<=b;n++){
		scanf("%d",&a[n]);
	}
	for(n=b;n>0;n--){
		printf("%d",a[n]);
		if(n != 1){
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}