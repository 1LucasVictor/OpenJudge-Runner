#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    while(n>0){
        if(n%10==7){
            printf("Yes");
            return  0;
        }
        n/=10;
    }
    printf("No");
    return 0;
}
