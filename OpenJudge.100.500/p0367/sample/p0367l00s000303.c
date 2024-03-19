#include<stdio.h>

main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int sum;
    while(1)
    {
        if(c % a == 0) sum++;
        if(a >= b) break;
        a++;
    }

    printf("%d\n", sum);
}
