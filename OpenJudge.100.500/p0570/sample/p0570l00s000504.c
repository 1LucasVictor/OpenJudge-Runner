#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int a, b,eq=0;
	scanf("%d %d", &a, &b);
	eq= (a+b)/2;
	if((a+b)%2==0)
		printf("%d", eq);
	else
		printf("IMPOSSIBLE");
	printf("\n");
    return 0;
}