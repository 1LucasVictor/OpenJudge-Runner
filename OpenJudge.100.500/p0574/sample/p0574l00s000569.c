#include <stdio.h>

int main (){
	int num=0;
	int a,b,c,d=0;
	
	scanf("%d",&num);

	a = num / 1000;
	b = (num / 100) - (a * 10);
	c = (num / 10) - (a * 100 + b *10);
	d = num - (a*1000+b*100+c*10);

	if(a==b || b==c || c==d){
		printf("Bad");
	}else{
		printf("Good");
	}


	return 0;
}