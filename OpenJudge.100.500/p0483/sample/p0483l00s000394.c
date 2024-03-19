#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int i;
    for(i = 0; i < 3; ++i){
        if(n % 10 == 7){
            printf("Yes");
            return 0;
        }else{
            n = n/10;
        }
    }
    printf("No");
    return 0;
}
