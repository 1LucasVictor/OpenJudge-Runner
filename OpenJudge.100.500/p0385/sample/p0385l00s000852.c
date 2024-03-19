#include<stdio.h>

int main(void){
    while(1){
        char *num;
        int ans = 0;
        int i = 0;

        scanf("%s", num);
        if(num[0] == '0') break;

        while(num[i] != '\0'){
            ans += num[i] - '0';
            i++;
        }

        printf("%d\n", ans);
    }

    return 0;
}