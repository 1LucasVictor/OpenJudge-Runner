#include<stdio.h>
int main()
{
    int N,A,B;

    scanf("%d %d %d", &N,&A,&B);

    int x = N*A;
    int y = B;

    if(x>=y) {
        printf("%d\n",y);
    }else{
        printf("%d\n",x);
    }
    return 0;
}