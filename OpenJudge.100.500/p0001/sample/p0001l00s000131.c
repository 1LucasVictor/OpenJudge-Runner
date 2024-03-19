#include<stdio.h>

int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		printf("%d\n",keta(a+b));
	}
	return 0;
}

int keta(int a){
	int d=a,c=0;
	while(d!=0){
		d/=10;
		c++;
	}
	return c;
}