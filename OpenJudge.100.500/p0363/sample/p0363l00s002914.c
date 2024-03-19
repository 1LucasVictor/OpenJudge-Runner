#include<stdio.h>
	int main(void){
	int a,b,c,n,j,i;
	
	scanf("%d %d %d", &a,&b,&c);

		if(a>b){
			n=b;
			b=a;
			a=n;
		}
		if(b>c){
			j=c;
			c=b;
			b=j;
		}
		if(a>b){
			i=a;
			a=b;
			b=i;
		}
printf("%d %d %d\n",a,b,c);

return 0;
}