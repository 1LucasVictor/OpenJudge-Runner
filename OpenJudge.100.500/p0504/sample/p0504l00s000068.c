#include<stdio.h>
int h,a,cnt;
int main(){
	scanf("%d %d",&h,&a);
	while(h>0){
		h-=a;
		cnt++;
	}
	printf("%d",cnt);
	return 0;
}