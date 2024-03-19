#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char str[100000 + 1];

    scanf("%s", str);
    int red = 0, blue = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if(str[i] == '0'){
            red++;
        }else{
            blue++;
        }
    }
    printf("%d\n", red < blue ? red * 2 : blue * 2);

    return 0;
}