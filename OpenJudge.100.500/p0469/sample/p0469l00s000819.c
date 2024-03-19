#include<stdio.h>
int main()
{
    int i , k , a , b , res=0 ;
    scanf(" %d%d%d" , &k , &a , &b);
    
    for(i=a ; i<b ; i++)
    {
        if((i%k)==0)
        {
            res=1;
            break;
        }
    }
    if(res==1) printf("OK");
    else printf("NG");
}