#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int a, b, c, eq=0;
	scanf("%d %d %d", &a, &b, &c);
	eq= a*b;
	if(eq > c)
		printf("%d", c);
	else 
		printf("%d", eq);
	printf("\n");
    return 0;
}