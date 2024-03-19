#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a,b,c,count = 0, ans;
    scanf("%d%d%d",&a,&b,&c);
    if( b+c < a)
    {
        printf("0\n");
        return 0;
    }
    if(b==a)
    {
      printf("%d\n",a);
      return 0;
    }
    
    for(int i=0;i<c;i++)
    {
        if(b != a)
        {
            b++;
            count++;
        }
        else if(b == a)
        {
            ans = c-count;
            printf("%d\n",ans);
            return 0;
            
        }
    }
}