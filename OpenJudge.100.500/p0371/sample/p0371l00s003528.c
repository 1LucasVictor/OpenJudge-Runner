#include <stdio.h>
int main(void){
    
   int n,a,i,sum=0,min,max;

    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d ",&a);
        sum=sum+a;
        if(i==0){
            min=a; max=0;
        }
        else{
            if(a<min) min=a;
            else if(a>max) max=a;
        }
    }
    
    printf("%d %d %d\n",min,max,sum);
   
    return 0;
    
}
