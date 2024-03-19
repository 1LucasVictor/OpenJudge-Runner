#include<stdio.h>
int main()
{
    int i , k , a , b , res=0 ;
    scanf("%d" , &k);
    scanf("%d" , &a , &b);
    if(a<b){
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
    if(a>b){
    for(i=b ; i<a ; i++)
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

    
}