#include <stdio.h>
#include <string.h>

void print_a_b(char *str, int a, int b)
{
    char tmp[1001] = {0};
    strncpy(tmp, str + a, b - a + 1);
    printf("%s\n", tmp);
}
void reverse_a_b(char *str, int a, int b)
{
    char tmp[1001] = {0};
    strcpy(tmp, str);
    for (int i = 0; i <= b - a; i++) //tmpの[a] ~ [b]にstrの[b] ~ [a]を代入
    {
        tmp[a + i] = str[b - i];
    }
    strcpy(str, tmp);
}
void replace_a_b_p(char *str, int a, int b, char *p)
{
    for (int i = 0; i <= b - a; i++)
    {
        str[a + i] = p[i];
    }
}
void switch_instruction(const char *inst, char *str, int a, int b)
{
    char pr[] = {"print"};
    char rev[] = {"reverse"};
    if (strcmp(inst, pr) == 0)
    {
        print_a_b(str, a, b);
    }
    else if (strcmp(inst, rev) == 0)
    {
        reverse_a_b(str, a, b);
    }
}

int main(void)
{
    char str[1001];
    int q;
    scanf("%s", str);
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        char inst[8];
        int a, b;
        scanf("%s", inst);
        scanf("%d %d", &a, &b);
        if (strcmp(inst, "replace") == 0)
        {
            char p[1001];
            scanf("%s", p);
            replace_a_b_p(str, a, b, p);
        }
        else
        {
            switch_instruction(inst, str, a, b);
        }
    }
    return 0;
}

