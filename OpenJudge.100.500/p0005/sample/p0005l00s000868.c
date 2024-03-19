#include <stdio.h>
#include <string.h>

int main (void)
{
    char str[22], temp;
    int lengthhalf, i, j;
    scanf("%s", &str);
    lengthhalf = strlen(str) / 2;
    
    i = 0;
    j = strlen(str) - 1;
    for ( ; i < lengthhalf; i++, j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        
    }
    puts(str);

    return (0);
}
