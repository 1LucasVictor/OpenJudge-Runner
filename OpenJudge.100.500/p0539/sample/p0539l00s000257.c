#include <stdio.h>
#include <stdlib.h>

int main(void){

    int num, i, j;
    int ans[81];
    scanf("%d", &num);
    int count = 0;
    int flag = 0;

    for(i = 1; i <= 9; i++){
        for(j = 1; j <= 9; j++){
            ans[count] = i * j;
            count++;
        }
    }

    for(i = 1; i < 81; i++){
        if(ans[i] == num) {
            printf("Yes\n");
            flag = 1;
            break;
        }
    }

    if(flag == 0) printf("No\n");
    
    return 0;
}