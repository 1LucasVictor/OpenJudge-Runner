#include <stdio.h>

int main(void){

int a,b;
scanf("%d %d", &a, &b);

if(a > 16/2)
	printf(":(");

else if(b >= (16-a)/2)
	printf(":(");

else
	printf("Yay!");

return 0;
}