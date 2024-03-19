#include<stdio.h>
int main()
{
    int x,dig,sum=0;
    while(scanf("%d",&x)!=EOF)
    {
        if(x==0)
      {
          break;
      }
        while(x>0)
        {
              dig=x%10;
        sum=sum+dig;
        x=x/10;
        }

 printf("%d\n",sum);
 sum=0;
    }




    return 0;
}

