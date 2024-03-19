#include <stdio.h>
int main(void){
	int h,a,i=0;
	scanf("%d %d",&h,&a);
	while(h>0){
		h-=a;
		i++;
	}
	printf("%d\n",i);
	return 0;
}