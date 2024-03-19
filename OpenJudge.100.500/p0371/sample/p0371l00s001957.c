#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,i,x,min = 1000000,max = -1000000;
    long int sum=0;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        
        scanf("%d",&x);
        sum=sum+x;
        
        if(x>=max){
            max=x;
        }
        if(x<=min){
            min=x;
        }
    }
    printf("%d %d %ld\n",min,max,sum);
    return 0;
}