#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int a, eq=0, eq2=0;
	scanf("%d", &a);
	eq= pow(a,2);
	eq2= pow(a,3);
	printf("%d\n", eq+a+eq2);
	return 0;
}