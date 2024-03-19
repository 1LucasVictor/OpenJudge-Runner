// AOJ ALDS1_3_A Stack
// 2018.4.27 bal4u
 
#include <stdio.h>
#include <ctype.h>
 
int stack[102]; int top;
char buf[2000];
 
int main()
{
    int  v1, v2;
    char *p;
 
    fgets(p=buf, 500, stdin);
    top = 0;
    while (*p >= ' ') {
        while (isspace(*p)) p++;
        if (isdigit(*p)) {
            v1 = 0;
            while (isdigit(*p)) v1 = 10*v1 + (*p++ & 0xf);
            stack[top++] = v1;
        } else {
            v1 = stack[--top];
            v2 = stack[--top];
            if      (*p == '+') v2 += v1;
            else if (*p == '-') v2 -= v1;
            else if (*p == '*') v2 *= v1;
            stack[top++] = v2;
            p++;
        }
    }
    printf("%d\n", stack[--top]);
    return 0;
}
