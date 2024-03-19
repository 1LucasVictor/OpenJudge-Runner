#include <stdio.h>
int main(void){
    int n,i,x,j;
    int sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        if(x==2){
            sum++;
        }
        
        for(j=2;j<=x-1;j++){
            
            if(x%j==0){
                break;
            }
            if(j==x-1){
                sum++;
            }
            
        }
       
        
        
    }
    printf("%d\n",sum);
  
  
  
}

