#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c,i=0,j;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	j=a;
	while((b-j)>=0){
		if((c%j)==0)i++;
		j++;
	}
	printf("%d\n",i);
	return EXIT_SUCCESS;
}