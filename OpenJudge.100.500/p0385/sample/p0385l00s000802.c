#include <stdio.h>
#include <ctype.h>

int ketaSum(int x){
    int sum = 0;
    do{
        sum += x%10;
        x/=10;
    }while (x!=0);
    
    return  sum;
}

int main(int argc, const char * argv[]) {
    
    while (1) {
        int x;
        scanf("%d",&x);
        if(x == 0){
            break;
        }
        printf("%d\n",ketaSum(x));
    }
    
    return 0;
}