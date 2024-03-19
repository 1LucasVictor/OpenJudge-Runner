#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
  int a,b;int c=0;
  scanf("%d%d",&a,&b);
        for(int i=a;i<=b;i++)
        {
          if(i%t==0)
          {
            ++c;break;
          }
        }
        if(c==0)
        printf("NG");
        else
        printf("OK");
          }