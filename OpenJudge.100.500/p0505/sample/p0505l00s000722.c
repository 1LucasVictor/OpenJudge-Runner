#include<stdio.h>
int main(void){
	int h,n,a;
	scanf("%d%d",&h,&n);
	while(n--){
		scanf("%d",&a);
		h-=a;
	}
	printf(h<=0?"Yes":"No");
	return 0;
}