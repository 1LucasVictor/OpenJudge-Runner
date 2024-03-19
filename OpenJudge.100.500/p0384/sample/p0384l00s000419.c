#include<stdio.h>

int main()
{
    char word;

    while(scanf("%c", &word) != EOF)
    {

        if('a' <= word && word <= 'z')
        {
            word = word - 'a' + 'A';
        }

        else if('A' <= word && word <= 'Z')
        {
            word = word - 'A' + 'a';
        }

        printf("%c", word);
        

    }

    return 0;

}
