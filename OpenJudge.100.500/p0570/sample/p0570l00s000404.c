#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d%d",&A,&B);
    int temp;
    int mid;
    mid = (A+B)/2;
    if(A>B)
    {
        temp = B;
        B = A;
        A = temp;
    }
    A-=mid;
    A=-A;
    B-=mid;
    (A==B)?printf("%d\n",mid):printf("IMPOSSIBLE\n");
    return 0;
}
