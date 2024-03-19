#include <stdio.h>

int main()
{
    int n,a;
    scanf("%d", &n);
    scanf("%d", &a);
    int max = a,min = a,sum = a;

    for(int i=2;i<=n;i++) {
        scanf("%d", &a);
        if(max<a)
          max=a;
        else if(min>a)
          min=a;
        sum += a;
    }

    printf("%d %d %d\n", min, max,sum);
    return 0;
}

