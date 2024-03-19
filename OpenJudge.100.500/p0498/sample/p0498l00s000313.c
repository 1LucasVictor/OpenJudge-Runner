#include <stdio.h>

int main(){
    int n,mod;
    
    scanf("%d",&n);
    
    mod = n%2;
    
    if(mod==1){
        printf("%d\n",n/2 + 1);
    }
    
    else{
        printf("%d\n",n/2);
    }
    
    
    return 0;
    
}