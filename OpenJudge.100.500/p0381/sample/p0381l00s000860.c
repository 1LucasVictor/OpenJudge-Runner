#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,x;
    
    int a,b,c;
    
    int count;
    
    while(1){
        count=0;
        scanf("%d %d",&n,&x);
        
        if(n==0 && x==0){
            break;
        }
        
        for(a=1;a<n-1;a++){
            for(b=a+1;b<n;b++){
                for(c=b+1;c<n+1;c++){
                    if(a+b+c==x){
                        
                        count++;
                    }
                }
            }
        }
        printf("%d\n",count);
    }
    
    
    return 0;
}
