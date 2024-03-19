#include <stdio.h>
int main(void){
    // Your code here!
    char s[20];
    char t[20];
    int i, j;
    scanf("%s", s);
    scanf("%s", t);
    for (i = 0; s[i] != 0; i++)
    {
        if (s[i] != t[i])
        {
            printf("No");
            return (0);
        }
    }
    if (t[i] != 0 && t[i + 1] == 0)
    {
        printf("Yes");
    }
    else
    printf("No");
    return (0);
}
