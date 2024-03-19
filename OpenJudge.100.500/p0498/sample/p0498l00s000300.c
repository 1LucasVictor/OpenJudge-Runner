#include <stdio.h>

int main(){
    int n, cont = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; ++i){
        if((i % 2) == 0){
            ++cont;
        }else if(i == n){
            ++cont;
        }
    }
    printf("%d\n", cont);


    return 0;
}
