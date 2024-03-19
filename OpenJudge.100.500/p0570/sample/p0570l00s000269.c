#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,i,max,c,x,y;
    scanf("%d%d",&A,&B);
    if(A > B)
    {
        max = A;
    }
    else
    {
        max = B;
    }
    for(i = 1 ; i <= max ; i = i + 1)
    {
        x = abs(A - i);
        y = abs(B - i);
        if(x == y)
        {
            c = 1;
            break;
        }
    }
    if(c == 1)
    {
        printf("%d\n",i);
    }
    else
    {
        printf("IMPOSSIBLE\n");
    }
    return 0;
}
