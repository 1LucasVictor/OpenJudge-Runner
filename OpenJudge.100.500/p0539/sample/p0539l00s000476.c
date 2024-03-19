#include <stdio.h>
int main(void)
{
    int a, f = 0;
    scanf("%d", &a);
    for (int i=1; i<10; i++){
        if (a % i == 0 && a/i < 10){
          printf("Yes"); f = 10; break;
        }
    }
	if (f == 0) printf("No");
    return 0;
}   