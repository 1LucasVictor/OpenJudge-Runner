#include<stdio.h>

void lank(int,int);

int main(){
	int n,m;
	while(scanf("%d %d",&n,&m) != EOF){
		lank(n,m);
	}
}

void lank(int a,int b){
	int i,sum=a+b;
	for(i=1;sum/10!=0;i++)sum/=10;
	printf("%d\n",i);
}