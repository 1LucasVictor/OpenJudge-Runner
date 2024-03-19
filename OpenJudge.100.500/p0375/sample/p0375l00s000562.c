#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    int i, x;
    scanf("%d", &n);
    for(i=3; i<=n; i++){
        x = i/10;
        if(x%10 == 3){
            printf(" %d", i);
        }else if(i%10 == 3){
            printf(" %d", i);
        }else if(i%3 == 0){
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}