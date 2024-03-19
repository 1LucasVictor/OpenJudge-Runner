#include <stdio.h>
int main(void){
    int x, a, b;
    
    scanf("%d %d %d",&x, &a, &b);
    
    if(a>=b){
        printf("delicious\n");
    }else if(a<b && b-a>x){
        printf("dangerous\n");
    }else{
        printf("safe\n");
    }
 
 
    return 0;   
}
