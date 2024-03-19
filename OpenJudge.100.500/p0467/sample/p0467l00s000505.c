#include<stdio.h>


#include<string.h>
int main()
{
    char ch[1000];
    char arr[1000];
    long long int a,b,c,d,i=0,j=0,k=0,l=0,m=0,n=0;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    j=d-a;
    if(j>0)
    {
      if(b>0)
       {
        i=1;
        while(i<b)
         {
          if((i+a)==d)
           break;
          i++;
         }
    
        }
      if((i+a)!=d)
        {
         k=1;
          while(k<c)
           {
            if((a+i+k)==d)
             break;
            k++;
           }
               
        }  
    printf("%lld\n",a-k);
    } 
    else
    printf("%lld\n",d);
    
   
}