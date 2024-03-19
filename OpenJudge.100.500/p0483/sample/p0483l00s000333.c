#include<stdio.h>
int main()
{
    int N, a, b, c, y, z;
    scanf("%d", &N);

    a=N%10;
    y=N/10;
    b=y%10;
    z=y/10;
    c=z%10;
    if(a==7){
        printf("Yes\n");
    }

    else if(b==7){
        printf("Yes\n");
    }

    else if(c==7){
        printf("Yes\n");
    }
    else
        printf("No\n");
    return 0;
}
