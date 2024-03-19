#include<stdio.h>
int main(void){
	int a,b,c,y,v,i,j;
	char k;
	while(scanf("%d %d",&a,&b)!=EOF){
		k=a;
		j=k;
		if(j==10){
			break;
		}
		if(a>b){
			c=a;
			a=b;
			b=c;
		}
		c=a;
		if(b%a==0){
			y=a;
		}
		else{
			while(1){
				c--;
				if(b%c==0 && a%c==0){
					y=c;
					break;
				}
			}
		}
		v=(a/y)*(b/y)*y;
		printf("%d %d\n",y,v);
	}
	return 0;
}
