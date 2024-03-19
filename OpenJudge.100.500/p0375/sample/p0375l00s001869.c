/*(c) nupetan 2017*/
#include<stdio.h>
int main(){
	int end_numeric,i;
	scanf("%d",&end_numeric);
	for(i=1;i<=end_numeric;i++){
		if(i%3==0)
			printf(" %d",i);
		else if(i%10==3)
			printf(" %d",i);
	}
	putchar('\n');
}