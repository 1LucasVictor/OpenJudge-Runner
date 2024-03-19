#include <stdio.h>

int main()
{
    char s[5];
    scanf("%s",s);

    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if (s[i] > s[j]) {
                char tmp =  s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }

    if ((s[0] == s[1]) && (s[2] == s[3]) && (s[0] != s[2]))
    {
        printf("Good");
    }
    else
    {
        printf("Bad");
    }
    
}