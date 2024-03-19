#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,k;
	scanf("%d %d %d %d %d %d",&a, &b,&c, &d,&e,&k);
	
	if(k >= e-a){
	printf("Yay!");
	}else{
		printf(":(");
	}
	return 0;
}