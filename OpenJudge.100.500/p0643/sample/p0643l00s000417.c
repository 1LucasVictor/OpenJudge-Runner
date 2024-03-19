#include <stdio.h>

int main(){
    int a,b,res;
    
    scanf("%d %d",&a,&b);
    
    res=a*b;
    
    if(res%2==0){
        printf("Even\n");
    }
    
    else{
        printf("Odd\n");
    }
    
    return 0;
}