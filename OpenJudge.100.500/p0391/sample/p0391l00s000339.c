#include <stdio.h>
#include <string.h>
 
void print(char str[], int a, int b);
void reverse(char str[], int a, int b);
void replace(char str[], int a, int b, char p[]);
 
int main(void)
{
    int i;
 
    char str[1001];
    scanf("%s", str);
 
    int op_num;
    scanf("%d", &op_num);
 
    char op[8];
    int a, b;
    for (i = 1; i <= op_num; i++) {
        scanf("%s", op);
        scanf("%d %d", &a, &b);
 
        if (strcmp(op, "print") == 0) {
            print(str, a, b);
        } else if (strcmp(op, "reverse") == 0) {
            reverse(str, a, b);
        } else {
            char p[1001];
            scanf("%s", p);
            replace(str, a, b, p);
        }
    }
 
    return 0;
}
 
void print(char str[], int a, int b)
{
    int i;
    for (i = a; i <= b; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}
 
void reverse(char str[], int a, int b)
{
    char tmp[1001];
    int i;
    for (i = a; i <= b; i++) {
        tmp[i] = str[b + a - i];
    }
    for (i = a; i <= b; i++) {
        str[i] = tmp[i];
    }
}
 
void replace(char str[], int a, int b, char p[])
{
    int i;
    for (i = 0; i < b - a + 1; i++) {
        str[a + i] = p[i];
    }
}