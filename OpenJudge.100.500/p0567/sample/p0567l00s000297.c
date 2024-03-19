#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int a, b, c, eq=0, eq1=0, eq2=0;
	scanf("%d %d %d", &a, &b, &c);
	eq= b+c;
	eq1= a-b;
	eq2= c-eq1;
	if (a > eq)
		printf("0");
	
	else 
		printf("%d", eq2);
	printf("\n");
    return 0;
}