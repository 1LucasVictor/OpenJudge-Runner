#include<stdio.h>


int main()
{
    int z,i,m,n,a,b,c,sum=0,t,j,d ;
    int ara[3432] ;
    scanf("%d",&t) ;
    for(i=0 ; i<t ; i++)
    {
        scanf("%d",&ara[i]) ;
    }
    for(i=0 ; i<t ; i++)
    {


        d=ara[i] ;
        if(d%2==0)
        {

            if(d%3==0||d%5==0)
            {
               c=0 ;
            }
            else
            {
               c=1 ;
               break ;
            }
        }

    }
    if(c==1)
    {
        printf("DENIED") ;
    }
    else
    {
        printf("APPROVED") ;
    }

  return 0 ;
}
