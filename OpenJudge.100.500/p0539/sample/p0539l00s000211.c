#include<stdio.h>
int main(void){
	int a,b,c,d=0,i;
	scanf("%d",&a);
	for(i=1;i<=9;i++){
		b=1;
		c=a%b;
		b++;
		if(c==0){
		d++;	
		}
	}
	if(d>0){
		printf(" Yes");
	}else{
		printf(" No");
	}
		return 0;
}