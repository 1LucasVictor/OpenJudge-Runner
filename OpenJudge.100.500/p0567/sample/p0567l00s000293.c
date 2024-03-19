#include <stdio.h>

int 
main(){
	
	int A,B,C;
	scanf("%d%d%d",&A,&B,&C);

	int tmp;
	if(A-B<C)tmp = C-(A-B);
	else tmp = 0;

	printf("%d\n",tmp);
 return 0;
}
