#include <stdio.h>
int main(void)
{
    char str[5];

    scanf("%s", str);

    if(str[0]==str[1] && str[1]!=str[2] && str[2]==str[3])
    printf("Yes\n");
    else if(str[0]==str[2] && str[2]!=str[1] && str[1]==str[3])
    printf("Yes\n");
    else if(str[0]==str[3] && str[3]!=str[1] && str[1]==str[2])
    printf("Yes\n");
    else
    printf("No\n");

    return 0;
    
}