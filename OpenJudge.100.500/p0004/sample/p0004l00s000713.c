#include<stdio.h>
int main(){
	unsigned long long int a=0,b=0,y=0,nanachi=0,tmp=0;
	while(~scanf("%d%d",&a,&b)){
		nanachi=a*b;
		if(a<b){
			tmp=a;
			b=a;
			a=tmp;
		}
		y=a%b;
		while(y){
			a=b;
			b=y;
			y=a%b;
		}
		printf("%u %u\n",b,nanachi/b);
	}
}
