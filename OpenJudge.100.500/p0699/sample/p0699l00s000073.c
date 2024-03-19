#include<stdio.h>
int main(){
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b){
		t=a;
		a=b;
		b=t;
	}
	if(a>=c){
		t=a;
		a=c;
		c=t;
	}
	if(b>=c){
		t=b;
		b=c;
		c=t;
	}
	if(a==5&&b==5&&c==7){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
