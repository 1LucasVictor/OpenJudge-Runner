#include<stdio.h>

int main(){
	
	long int a,b,x,y,c;
	long int a1,a2;
	
	while (1) {
		
	scanf("%ld %ld",&a,&b);
		if (getchar() == EOF)break;
		a1=a;
		a2=b;
		while(a1>0&&a2>0){
			if(a1<a2){
				c=a2;
				a2=a1;
				a1=c;
			}
			c=a2;
			a2=a1-a2;
			a1=c;
		}
		c=0;
		x=a1;
		y=a*b/x;
		
		printf("%ld %ld\n",x,y);
	}
	return 0;
}