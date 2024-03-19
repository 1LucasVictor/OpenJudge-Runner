#include<stdio.h>
int main(void)
{
	int a,b,c,k,i,d;
	scanf("%d %d %d %d",&a,&b,&c,&k);
	for(i=0;i<k;i++){
		if(a>=1){
			d=d+1;
			a=a-1;
		}
		else if(b>=1){
			b=b-1;
		}
		else if(c>=1){
			d=d-1;
			c=c-1;
		}
	}
	printf("%d\n",d);
	return 0;
}