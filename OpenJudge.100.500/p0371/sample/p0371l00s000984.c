#include <stdio.h>
int main(void){
    int a,i,max,mini,n;
    long long int sum; 
    
    max=-1000000; 
    mini=1000000; 
    sum=0; 
    
    scanf("%d",&n); 
    
    for (i=1 ; i<=n ; i=i+1){
        scanf("%d",&a);
        
        if(mini>a) 
            mini=a; 
            
        if(max<a) 
            max=a; 
            sum=sum+a; 
        
    } 
    
    printf("%d %d %lld\n",mini,max,sum);
    
    return 0; 
    
} 
