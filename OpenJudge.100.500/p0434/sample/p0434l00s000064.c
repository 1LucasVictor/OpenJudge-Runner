#include <stdio.h>
int main(void){
    // Your code here!
    int x;
    
    
    scanf("%d", &x);
    if((x<-40) || (x>40)){
        printf("incorrect temperature.\n");
        return -1;
    }
    
    if(x>=30){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    
    return 0;
}
