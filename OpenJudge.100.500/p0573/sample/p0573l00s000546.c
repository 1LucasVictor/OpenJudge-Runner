#include <stdio.h>

int main(void)
{
    char s[4];
    int i;
    int j;
    int judge[4];

    for(i = 0; i < 4; i++){
        judge[i] = 0;
    }

    scanf("%s", s);

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(s[i] == s[j]){
                judge[i]++;
            }
        }
    }

    for(i = 0; i < 4; i++){
        if(judge[i] != 2){
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}