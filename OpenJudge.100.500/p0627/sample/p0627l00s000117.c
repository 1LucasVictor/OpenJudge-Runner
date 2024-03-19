#include <stdio.h>
int main()
{
    int add,sub,mal;
    int A,B,max = -2000;

    scanf("%d %d",&A,&B);
    add = A + B;
         if(add > max)
         max = add;
    sub = A - B;
        if(sub > max)
         max = sub;
    mal = A * B;
        if(mal > max)
        max = mal;

printf("%d",max);

    return 0;
}