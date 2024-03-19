#include <stdio.h>

int main(void) {

    char *str;
    int i;
    int flag;


    scanf("%s", str);

    flag = 0;
    for (i = 0; i < 3; i++) {
        if (str[i] == 'A') {
            flag++;
            break;
        }
    }
    for (i = 0; i < 3; i++) {
        if (str[i] == 'B') {
            flag++;
            break;
        }
    }
    
    if (flag == 2) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;

}