#include<stdio.h>
int main(){
	int a,b,c,n,sum=0;
	scanf("%d %d %d %d",&a,&b,&c,&n);
	if(n>a){
		n-=a;
		if(n>b){
			n-=b;
			if(n>0)printf("%d",a-n);
		}
		else{
			printf("%d",a);
		}
	}
	else{
		printf("%d",a);
	}
	return 0;
}