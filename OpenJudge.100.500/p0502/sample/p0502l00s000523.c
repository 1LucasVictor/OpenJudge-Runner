#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int sum=0;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)   
    {
        if(a[i]%2==0)
        {
            if(a[i]%3==0 || a[i]%5==0)
            {
                sum=0;
            }
            else
            {
                sum=1;
                break;
            }
        } 
        
    } 
    
          if(sum==0)
    {
        printf("APPROVED\n");
    }
    else if(sum==1)   
    {
        printf("DENIED\n");
    }
    return 0;
}    
  
     