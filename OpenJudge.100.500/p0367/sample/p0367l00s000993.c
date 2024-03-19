#include<stdio.h>
int main(void){
	int a,b,c,d,e,f;
	f=0;
	scanf("%d %d %d",&a,&b,&c);
	for(d=a;d<=b;d++){
		e=c%d;
		if(e==0){
			f=f+1;
		}
	}
	printf("%d\n",f);
	return 0;
} 