#include <stdio.h>

int main(){
    
    int a,b,c,i,n = 0;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    i = a;
    
    while(i != b){
        if(c % i == 0){
            n = n + 1;
        }
        i++;
    }
    
    if(n == 0){
        printf("%d\n",1);
        return 0;
    }
    
    printf("%d\n",n);
    
    return 0;    
}