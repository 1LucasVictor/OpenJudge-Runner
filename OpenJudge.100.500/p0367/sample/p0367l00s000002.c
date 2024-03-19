#include<stdio.h>
int main(void){
	int a,b,c,d;
	d=0;
	scanf("%d %d %d",&a,&b,&c);
	for(a;a<b;a++){
		if(c%a==0){
		d=d+1;
	}
	}
	printf("%d\n",d);
			
return 0;

}