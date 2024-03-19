#include <stdio.h>

int main(void)
{
	int a,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		if(i%3==0){
			printf(" %d",i);
		}else if(i%10==3 || (30<=i%100 && i%100<=39) || (300<=i%1000 && i%1000<=399)){
			printf(" %d",i);
		}
	}
	printf("\n");
	return 0;
}
