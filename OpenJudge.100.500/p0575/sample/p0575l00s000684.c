#include<stdio.h>
int main(){
	int x,a;
	while(~scanf("%d%d",&x,&a)){
		if(x<a) printf("0\n");
		if(x>=a) printf("10\n");}
	return 0;
}