#include <stdio.h>

int main(void)
{
    char x[1001];
    int sum;
    int i;
    
    while (1){
        scanf("%s", x);
        if (x[0] == '0'){
            break;
        }
        
        sum = 0;
        i = 0;
        while (x[i] != '\0'){
            sum += x[i] - '0';
            i++;
        }
        printf("%d\n", sum);
    }
    
    return (0);
}

