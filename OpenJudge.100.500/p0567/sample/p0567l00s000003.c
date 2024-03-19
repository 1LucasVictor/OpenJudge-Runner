#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, x, y;
    scanf("%d%d%d", &a, &b, &c);
    x=a-b;
    if(c>x){
		y=c-x;
		printf("%d", y);
		return 0;
    }
    else printf("0");

    return 0;
}
