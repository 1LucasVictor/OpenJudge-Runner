#include<stdio.h>

int main(){
	int i,j;
	long a,b,x,y,temp,maxa,mina;

	while(scanf("%d %d",&a,&b)!=EOF){
		x=a;
		y=b;
		while(1){
			if(x<y){
				temp=y;
				y=x;
				x=temp;
			}
			else if(x==y){
				maxa=x;
				break;
			}
			x=x-y;
		}

		mina=(a*b)/maxa;

		printf("%d %d\n",maxa,mina);

	}

	return 0;
}