#include <stdio.h>

int main(void){
    int a,b,c,d;
    int sum=0;
    
    while(scanf("%d",&a)!=EOF){
        for(b=2;b<=a;b++){
            d=0;
            
            for(c=2;c<=b;c++){
                if(b%c==0 && b!=c){
                    d++;
                    break;
                }
            }
        
            if(d==0){
                sum=sum+1;
            }
        }
        printf("%d\n", sum);
        sum=0;
        
    }
    return 0;
}
