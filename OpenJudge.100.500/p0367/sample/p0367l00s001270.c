#include <stdio.h>

int main(void) {
	int a,b,c,n=0;
	for(;a!=b;a++){
		scanf("%d %d %d",&a,&b,&c);
		if(c%a==0){
			n++;
		}
	}
	printf("%d\n",n);
	return 0;
}