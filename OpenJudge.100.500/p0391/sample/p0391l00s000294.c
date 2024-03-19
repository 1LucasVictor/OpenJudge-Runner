#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    char order[8];
    char input[1001];
    char output[1001];
    char tmp;
    int q, a, b, i, j, k;
    
    scanf("%s", str);
    scanf("%d", &q);
    
    for(i = 0; i < q; i++)
    {
        scanf("%s %d %d", order, &a, &b);
        
        if(strcmp(order, "print") == 0)
        {
            for(j = 0, k = a; k <= b; j++, k++)
            {
                output[j] = str[k];
            }
            output[j] = '\0';
            printf("%s\n",output);
        }
        else if(strcmp(order, "reverse") == 0)
        {
            for(j = a, k = b; j < k; j++, k--)
            {
                tmp = str[j];
                str[j] = str[k];
                str[k] = tmp;
            }
        }
        else if(strcmp(order, "replace") == 0)
        {
            scanf("%s", input);
            for(j = 0, k = a; j < strlen(input); j++, k++)
            {
                str[k] = input[j];
            }
        }
    }
    
    return 0;
}
