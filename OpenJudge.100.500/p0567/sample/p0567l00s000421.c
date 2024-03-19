#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int a,b;
    a = A-B;
    if(C>a){b=C-a;
    printf("%d\n",b);}
    else
        printf("0\n");
    return 0;
}
