#include <stdio.h>

int main()
{
	int a, b, c;
  	scanf("%d%d%d", &a, &b, &c);
  	if (a > c){
    	printf("NO");
    } else if (a + b < c){
    	printf("NO");
    } else {
    	printf("YES");
    }
}