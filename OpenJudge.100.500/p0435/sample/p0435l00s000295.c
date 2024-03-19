#include<stdio.h>
#include <math.h>

int main(void){
	int m,n,kos,dis,i,q=0,c,d;
	double b,x,y;
	scanf("%d",&kos);
	scanf("%d",&dis);
	for(i=0;i<kos;i++){
		scanf("%d",&m);
		scanf("%d",&n);
		c=pow(m,2);
		d=pow(n,2);
		b=sqrt(c+d);
		if(b<=dis){
			q++;
		}
	}
	printf("%d",q);
	return(0);
}