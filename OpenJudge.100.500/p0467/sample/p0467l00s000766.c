#include<stdio.h>
int main()
{
    int a, b, c, k, sum = 0, x;
    scanf("%d %d %d %d",&a,&b,&c,&k);

    if(k <= a){
        sum = a;
    }

    else if( k <= (a + b)){
        sum = a;
    }

    else if( k <= (a + b + c)){
        x = k - (a + b);
        sum = a - x;
    }

    printf("%d\n",sum);

    return 0;
}
