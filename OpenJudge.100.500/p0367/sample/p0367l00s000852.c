#include<stdio.h>
int main(void)
{
	int a=0,b=0,c=0,d,e=0,f=0;
	
	scanf("%d%d%d",&a,&b,&c);
	for(d=a;d<b;d++){
		e=0;
		e=c%d;	
	if(e==0){
		f++;
	}
	}
	printf("%d\n",f);
	
	return 0;
}
