#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	if(n%2 == 0){	
		printf("%d\n",n/2);
	}
	else if(n%2 != 0){
		printf("%d\n",(n/2)+1);
	}
	return 0;
}
