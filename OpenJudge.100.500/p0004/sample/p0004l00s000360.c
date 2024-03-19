#include<stdio.h>

int main(void){

	long a,b,x,y,num,tmp,big,small;
	
	while(scanf("%ld %ld",&x,&y)!=EOF){
		a=x;
		b=y;
		
		if(a<b){
		tmp=a;
		a=b;
		b=tmp;
		}
		while(b!=0){
		num=a%b;
		a=b;
		b=num;
		}
		small=a;
		big=x*y/small;
	printf("%ld %ld\n",small,big);
	}
	return 0;
}