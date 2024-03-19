#include<stdio.h>
int main(void){

	int i,max,a[100];

	scanf("%d",&max);

	for(i=0;i<max;i++)scanf("%d",&a[i]);

	for(i=max-1;i>0;i--)printf("%d ",a[i]);

	printf("%d\n",a[0]);

	return 0;

}