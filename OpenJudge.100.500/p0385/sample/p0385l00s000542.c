#include <stdio.h>

int main(void)
{
    char buf[1001] = {'\0'};
    int sum;
    int i = 0;

    do {
        buf[0] = '\0';
        scanf("%s", buf);
        if (buf[0] == '0') break;
        sum = 0;
        i = 0;
        while(buf[i] != '\0')
        {
            sum += buf[i++] - '0';
        }
        printf("%d\n", sum);
    } while (buf[0] != '0');  

    return 0;
}
