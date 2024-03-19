#include <stdio.h>
int main(void) {
	int a,b;
	while(scanf("%d %d",&a,&b)>=0){
		int i=0,c;
		c=a+b;
		while(c!=0){
			c=c/10;
			i++;
		}
		printf("%d\n",i);
	}
	return 0;
}
