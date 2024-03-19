#include <stdio.h>

int main(void)
{  
    int i, flag=0;
    char str[3];

    scanf("%s", str);

    for(i=1; i<3 ;i++) {
        if(str[i-1] != str[i]) {
            flag = 1;
        }
    }

    if(flag == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}