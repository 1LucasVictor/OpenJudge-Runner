#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x[100], top = -1;               
    char s[100];

    while (scanf("%s", s) != EOF) {
        if (s[0]=='+') {
            x[top - 1] = x[top - 1] + x[top];
            top--;
        }
        else if (s[0]=='-') {
            x[top - 1] = x[top - 1] - x[top];
            top--;
        }
        else if (s[0]=='*') { 
            x[top - 1] = x[top - 1] * x[top];
            top--;
        }
        else {
            x[top + 1] = atoi(s);
            top++;
}
    }

    printf("%d\n", x[0]);

    return 0;
}