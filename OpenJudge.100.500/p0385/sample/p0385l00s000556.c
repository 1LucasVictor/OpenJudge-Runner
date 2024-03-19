#include<string.h>
#include <stdio.h>

int main(void){
    int x,total = 0;
    
    while(1){
        scanf("%d",&x);
        
        if(x == 0) break;
        
        while(x != 0){
            total = total+x%10;
            x = x/10;
        }
        printf("%d\n",total);
        total = 0;
    }
}