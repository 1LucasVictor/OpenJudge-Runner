#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if(A<C || B<C )
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }


    return 0;
}
