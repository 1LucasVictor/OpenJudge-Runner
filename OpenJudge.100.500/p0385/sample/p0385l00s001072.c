#include<stdio.h>

int main()
{
    char str[1001];
    int ans, i;

    while(1) {
        scanf("%s", str);

        if(str[0] == '0') break;

        ans = 0;
        for(i = 0; str[i] != '\0'; i++) {
            ans += str[i] - '0';
        }
        printf("%d\n", ans);
    }
}

