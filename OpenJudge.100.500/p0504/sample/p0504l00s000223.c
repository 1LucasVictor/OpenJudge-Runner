#include<stdio.h>
int main(){
	int h,a;
	int cnt=0;
	scanf("%d%d",&h,&a);
	do{
		h=h-a;
		cnt++;
		
	}while(h>0);
	printf("%d",cnt);
	
}