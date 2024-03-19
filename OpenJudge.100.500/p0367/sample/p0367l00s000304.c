#include <stdio.h>

int main(void) {
	int a,b,c,i,x;
	x=0;
	scanf("%d%d%d",&a,&b,&c);
	for(i=a;i<=b;i++){
		if(c%i==0)x++;
	}
	printf("%d\n",x);
	return 0;
}

