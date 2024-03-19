#include<stdio.h>
int main()
{
    int a,b,c=0,d,e,i;
    scanf("%d%d",&a,&b);
    if(a<=20 && b<=20){

         //for(i=1;i<=20;i++)
         i=1;
            while(c!=1)
            {
                if(((a*i)-(i-1))>=b)
                    {
                        printf("%d\n",i);

                         break;
                    }
                    i++;
            }
    }

    return 0;
}
