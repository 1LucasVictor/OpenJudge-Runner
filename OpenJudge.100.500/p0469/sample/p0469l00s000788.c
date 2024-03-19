#include<stdio.h>


int main()
{
    int k,a,b,i,j,c ;
    scanf("%d %d %d",&k,&a,&b) ;
    for(i=a ; i<=b ; i++)
    {
        if(i%k==0)
          {
               c=1 ;
               break ;
          }
          else
            c=0 ;

    }
    if(c==1)
        printf("OK") ;
    else
        printf("NG") ;

    return 0 ;
}
