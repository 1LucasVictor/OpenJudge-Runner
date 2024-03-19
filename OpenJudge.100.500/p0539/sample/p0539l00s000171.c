#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int a, max_div = 100, sub = 100;
    scanf("%d", &a);

    for(int i = 1; i <= 9; ++i){
        if (a%i == 0){
            max_div = i;
            sub = a/i;
        }
    }

    if(sub <= 9){
        printf("Yes\n");
    } else{
        printf("No\n");
    }


    return 0;
}
