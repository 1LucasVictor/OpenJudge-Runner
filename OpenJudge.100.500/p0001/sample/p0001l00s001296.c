#include<stdio.h>

int main(void)
{
	int a[3],b[3],c[3];
	int i,j;
	for(i=0;i<3;i++){
		scanf("%d %d",&a[i],&b[i]);
		c[i]=a[i]+b[i];
	}
	for(i=0,j=0;i<3;i++){
		j=0;
		while(c[i]>=1){
			c[i]/=10;
			j++;
		}
		printf("%d\n",j);
	}
	return 0;
}