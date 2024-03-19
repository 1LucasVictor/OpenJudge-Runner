#include <stdio.h>

int n;
int main()
{

    scanf("%d",&n);
    if(n/100 == 7 || (n/10)%10 == 7 || n % 10 == 7)
        printf("Yes");
    else
        printf("No");
    return 0;
}
