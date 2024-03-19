#include <stdio.h>
int main()
{
int N,M,a,b,c;
scanf("%d", &N);

if(100<N || N<999)
{
    a=N%10;
    M=N/10;
    b=M%10;
    c=M/10;
    if(a==7 || b==7 || c==7)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
}
else{
    printf("input is not right");
}
}
