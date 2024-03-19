#include<stdio.h>
int main(void)
{
	int n,i,mot=100000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		mot=mot*1.05;
		if(mot%1000>0){
			mot=mot-(mot%1000)+1000;
		}
	}
	printf("%d\n",mot);
	return 0;
}