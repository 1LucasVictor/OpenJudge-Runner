#include <stdio.h>


int main(void){
    int n,a,b,c,d,k=0;
    
    while(scanf("%d",&n)!=EOF){
        
        for(a=0;a<10;a++)
            for(b=0;b<10;b++)
                for(c=0;c<10;c++){
                    d = n-a-b-c;
                    if(d>=0 && d<=9) k++;
                }
        
        printf("%d\n",k);
        k=0;
    }
    
    return 0;
}