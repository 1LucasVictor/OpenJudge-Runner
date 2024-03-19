#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,y,o,e,i;
    scanf("%d",&n);
    for(i=sqrt(n); i>=1; i--)
    {
        if(n%i==0)
        {
            x=i;
            y=n/i;
            if(x>9||y>9)
            {
                printf("No\n");
                break;
            }
            else
            {
                printf("Yes\n");
                break;
            }
        }
    }
    return 0;
}
