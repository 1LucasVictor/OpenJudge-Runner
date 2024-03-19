#include<stdio.h>
int main()
{
    int A,B;
    int K;
    scanf("%d %d",&A,&B);
    //K=(A+B)/2;
    if(((A%2==1) && (B%2==0)) || ((B%2==1) &&(A%2==0)))

        {printf("IMPOSSIBLE");}
    else

            {K=(A+B)/2;
            printf("%d",K);}
    return 0;
}
