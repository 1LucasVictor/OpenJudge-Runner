#include <stdio.h>
int main()
{
	int A,B,X;
	scanf("%d %d %d",&A,&B,&X);
	if(X>=A){
		if(X<=A+B){
			printf("YES");
		}else{
			printf("NO");
		}
	}else{
		printf("NO");
	}
	return 0;
}
