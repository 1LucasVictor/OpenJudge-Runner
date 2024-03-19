#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,count=0,a,b,c;

	scanf("%d%d%d",&a,&b,&c);

	for(i=a;i<=b;i++){
		if(c%i==0){
			count++;
		}
	}
	printf("%d\n",count);

	return 0;
}