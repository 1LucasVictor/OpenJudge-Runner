#include<stdio.h>
int main(void)
{
	int a,b,s,x,x1,X,X1;
	while((scanf("%d %d",&a,&b))!=EOF){
		s=0;
		x=a; x1=b;
		if(x<x1){
			s=x;
			x=x1;
			x1=s;
		}
		while(1){
		if(x1==0) break;
			x%=x1;
			s=x;
			x=x1;
			x1=s;
		}
		X=a; X1=b;
		while(1){
			if(X==X1) break;
			else if(X<X1){
				X+=a;
			}
			else if(X>X1){
				X1+=b;
			}
		}
		printf("%d %d\n",x,X);
	}
	return 0;
}