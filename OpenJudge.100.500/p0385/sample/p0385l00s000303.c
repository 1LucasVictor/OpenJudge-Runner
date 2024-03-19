#include <stdio.h>

int main()
{
    char num[1001];
    int i, sum;
    
    while (1) {
        scanf("%s", num);
        
        if (num[0] == '0') {
            break;
        }
        
        sum = 0;
        for (i = 0; num[i] != '\0'; i++) {
            sum += num[i] - '0';
        }
        
        printf("%d\n", sum);
    }
    
    return 0;
}