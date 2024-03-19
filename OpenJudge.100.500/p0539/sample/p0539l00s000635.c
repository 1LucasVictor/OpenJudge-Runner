#include <stdio.h>

int main(void)
{
    int n = 0, i = 0, flg = 0;
    scanf("%d", &n);

    for(i = 9; i >= 1; i--){
        if( (n % i  == 0) && (n / i <= 9)){
            flg = 1;
        }
    }

    if(flg == 1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 1;
}