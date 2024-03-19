#include <stdio.h>

int main(){
    int val,res;
    
    scanf("%d",&val);
    
    res = val + (val*val) + (val*val*val);
    
    printf("%d\n",res);
    
    return 0;
}