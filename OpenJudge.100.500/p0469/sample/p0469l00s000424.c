#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 0, b = 0, k = 0;
    int chk_flg = 0;

    scanf("%d", &k);
    scanf("%d%d", &a, &b);

    for(int i = a; i <= b; i++){
        if(i % k == 0)
            chk_flg = 1;
    }

    if(chk_flg == 1)
        printf("OK");
    else
        printf("NG");

    return 0;
}