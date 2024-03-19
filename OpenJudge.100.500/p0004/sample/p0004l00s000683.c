#include <stdio.h>

int main(){

	int a,b;
	int x,y;


	while(scanf("%d%d",&a,&b) != EOF){
	fflush(stdin);
	x=a;
	y=b;
	if(a<b){
		int temp=a;
		a=b;
		b=temp;
	}

	while(1){
		int temp=a%b;
		a=b;
		b=temp;
		if(a%b==0)break;
	}

	y=x/b*y;


	printf("%d %d\n",b,y);
	}
	return 0;
}
	