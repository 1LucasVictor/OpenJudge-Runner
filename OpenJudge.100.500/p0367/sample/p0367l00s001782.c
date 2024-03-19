#include<stdio.h>

int main(){
	int a,b,c,i,x,p;
	p=0;
	scanf("%d %d %d %d %d",&a,&b,&c,&i,&x);
	for(i=a;i<=b;i++){
		x=c%i;
		if(x==0){
			p++;
		}
	}
	printf("%d\n",p);
	
return 0;
}
