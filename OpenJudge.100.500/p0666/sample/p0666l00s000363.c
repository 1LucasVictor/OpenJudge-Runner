#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a < b) {
    	if (c - b > a)
        	printf("dangerous\n");
		else	
			printf("safe\n");    	
    }

    else {
        if (b >= c)
            printf("delicious\n");
        if (c > b && c - b <= a)
            printf("safe\n");
    }
    return 0;
}
