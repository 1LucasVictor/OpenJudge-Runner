#include <stdio.h>
int main(void){
    // Your code here!
    int n,m;
    long int k;
    scanf("%d %d %ld",&n,&m,&k);
    
    long int a[200000]={};
    long int as[200001]={};
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        if(i==0){
            as[i]=0;
        }
        as[i+1]=as[i]+a[i];
        
        //printf("%d %d\n",a[i],as[i]);
    }//printf("\n");
    
    long int b[200000]={};
    long int bs[200001]={};
    for(int i=0;i<m;i++)
    {
        scanf("%ld",&b[i]);
        if(i==0){
            bs[i]=0;
        }
        bs[i+1]=bs[i]+b[i];
        
        //printf("%d ",bs[i]);
    }//printf("\n");
    
    int num=0;
    int mo=m;
    for(int i=0;i<=n;i++)
    {
        if(as[i]>k)
        {
            break;
        }
        for(int j=mo;j>=0;j--)
        {
            if(as[i]+bs[j]<=k)
            {
                if(i+j>num)
                {
                    num=i+j;
                }
                mo=j;
                break;
            }
        }
        
    }
    
    
    printf("%d\n",num);
}