#include <stdio.h>
 
int main(void)
{
    int x;
    int y;
    int a;
	int tmp;
     
    scanf("%d %d", &x, &y);
	
	if (y > x){
		tmp = x;
		x = y;
		y = tmp;
	}
	
    a = x % y;
     
    while (a != 0){
        x = y;
        y = a;
        a = x % y;
    }
     
    printf("%d\n", y);
     
    return (0);
}