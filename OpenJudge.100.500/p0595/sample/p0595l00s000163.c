#include <stdio.h>

int main(void){
    
    int a,b,k,count;
    count=0;
    scanf("%d %d %d",&a,&b,&k);
    
    for(int i=1; i<=a; i++){
        if(a%i==0 || a%i%2==0){
            if(b%i==0 || b%i%2==0){
                count++;
                
                if(count==k){
                    printf("%d",i);
                    return 0;
                }
            }
        }
    }
}