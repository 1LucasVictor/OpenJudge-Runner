#include<stdio.h>
int main()
{
    int A,B,N;
    scanf("%d %d",&A,&B);


    if(A > 0 && A < 10 && B >0 && B < 10)
    {




        N = A*B;
        printf("%d\n",N);
    }


    else
        printf("-1\n");


return 0;


}
