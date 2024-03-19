#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE 4
int main()
{
    char inputS[ARRAY_SIZE];

    scanf("%s", inputS);
    
    // Checks if there are routes operated by only one company
    if (strcmp(inputS, "AAA") == 0 || strcmp(inputS, "BBB") == 0)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
    
    return 0;
}
