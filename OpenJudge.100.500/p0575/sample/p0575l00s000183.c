#include <stdio.h>
#define LENGTH 256

int main()
{
    char input[LENGTH];
    int num1, num2;
    int result;
    fgets(input, LENGTH-1, stdin);
    sscanf(input, "%d %d", &num1, &num2);
    if (num1 < num2)
    {
        result = 0;
    }else
    {
        result = 10;
    }
    printf("%d\n", result);
    
    return 0;
}
