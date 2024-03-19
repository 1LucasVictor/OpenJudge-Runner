#include <stdio.h>
int main(void){
    // Your code here!
    int a,b;
    int seki;
    scanf("%d %d",&a,&b);
    seki=a*b;
    if(seki%2!=0){
        printf("Odd");
    }
    else{
        printf("Even");
    }
    
    return 0;
}