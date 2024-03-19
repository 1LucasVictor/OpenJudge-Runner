#include <stdio.h>
int main ()

{
    int a,b,temp;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a<b)
        {
            temp=a;
        }

        else
        {
            temp=b;
        }

        again: 
        if (a%temp==0 && b%temp==0)
        {
            printf("%d",temp);
        }

        else
        {
            temp=temp-1;
            goto again;
        }


    }
  
    return 0;
  
}






