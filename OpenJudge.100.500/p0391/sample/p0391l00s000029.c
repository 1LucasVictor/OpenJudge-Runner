#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define S_MAX     1000
#define STR_BUF_MAX S_MAX+1
#define BUFF_MAX    S_MAX+20

void print(char *str, int a, int b)
{
    int i;

    for(i=a;i<b+1;i++) {
        printf("%c", str[i]);
    }
    putchar('\n');

    return;
}

void reverse(char *str, int a, int b)
{
    int i;
    int d = b-a+1;
    char c;

    for(i=0;i<d/2;i++) {
        c = str[i+a];
        str[i+a] = str[i+a+d-1];
        str[i+a+d-1] = c;
    }
//    printf("%s\n", str);

    return;
}

void replace(char *str, int a, int b, char *p)
{
    int i;
    int d = b-a+1;

    for(i=0;i<d;i++) {
        str[i+a] = p[i];
    }
//    printf("%s\n", str);

    return;
}

int judge_order(const char *str)
{
    if(str[0] == 'p')       return 1;
    else if(str[2] == 'v')  return 2;
    else                    return 3;
}

void excute_order(int order,char *str, int a, int b, char *tmp)
{
    switch(order) {
     case 1: print(str, a, b);  break;
     case 2: reverse(str, a, b);    break;
     case 3: replace(str, a, b, tmp);   break;
     default: break;
    }

    return;
}

int main(void)
{
    int i;
    int n;
    char str[STR_BUF_MAX];
    char buf[BUFF_MAX];
    char *tok;
    char tmp[] = " \n";

    scanf("%s", str);
//    printf("%s\n", str);

    scanf("%d%*c", &n);

    for(i=0;i<n;i++) {
        int order;
        int a, b;

        fgets(buf, BUFF_MAX, stdin);

        tok = strtok(buf, tmp);     order = judge_order(tok);
        tok = strtok(NULL, tmp);    a = atoi(tok);
        tok = strtok(NULL, tmp);    b = atoi(tok);
        if(order == 3) tok = strtok(NULL, tmp);

        excute_order(order, str, a, b, tok);
    }

    return 0;
}