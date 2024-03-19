#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int i, judge=1;
    char str[256], str2[256];

    scanf("%s", str);
    scanf("%s", str2);

    if(strlen(str)+1 == strlen(str2)) {
        judge = 0;
        for(i=0; i<strlen(str); i++) {
            if(str[i] != str2[i]) {
                judge = 1;
            }            
        }
    }

    if(judge == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}