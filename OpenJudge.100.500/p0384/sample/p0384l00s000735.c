#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool is_upper(char c) //大文字かどうか判定
{
    if ('A' <= c && c <= 'Z')
    {
        return true;
    }
    return false;
}

char swap_letter_case(char c) //is_upperで大文字だったものは小文字、それ以外の英文字は小文字にする
{
    if (is_upper(c))
    {
        c = tolower(c);
    }
    else
    {
        c = toupper(c);
    }

    return c;
}

void swap_string_case(char str[]) //iがNULL文字と一致するまで大文字と小文字を入れ替える
{
    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = swap_letter_case(str[i]);
        i++;
    }
}

int main(void)
{
    char strings[1200] = {'\0'};

    scanf("%[^\n]%*c", strings);
    swap_string_case(strings);
    printf("%s\n", strings);

    return 0;
}
