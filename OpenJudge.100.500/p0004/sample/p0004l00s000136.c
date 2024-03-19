#include<stdio.h>
int main(void){
	int x,y,a,b,i;
	while(scanf("%d%d",&x,&y)!=EOF){
		a=x;b=y;
		while(1){
			if(a>b)a-=b;
			if(a<b)b-=a;
			if(a==b)break;
		}
		printf("%d %d\n",a,x*(y/a));
	}
	return 0;
}