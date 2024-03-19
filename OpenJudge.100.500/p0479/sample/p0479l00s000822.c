#include<stdio.h>

int main()
{
    int n,c[200001],i,j,k,count=0;
    scanf("%d",&n);
    
    for(i=0;i<n-1; i++) {
        scanf("%d",&c[i]);
        }
       
        
    
    for(j=0; j<n; j++) {
        
        for(k=0; k<n; k++) {
            if(c[k]==j+1) count++;
            
           
        }
         printf("%d\n",count);
        count=0;
    }

    return 0;
}