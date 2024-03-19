#include <stdio.h>

int main(void){
    int a,b,sum,k=1,count=0,x;
    while(1){
        x = scanf("%d %d",&a,&b);
        if(x==EOF)
            break;
        
        sum=a+b;
        k=1;
        count=0;
        while(1){
            if(sum/k==0)
                break;
            k=k*10;
            count++;
        }
        printf("%d\n",count);
        
    }
    
    return 0;
    
}