#include <stdio.h>

int stack[100];
int sp = 99;
int main() {
    int x = 0;
    while(scanf("%d", &x) != EOF) {
        if(x == 0) {
            //取り出し
            --sp;
            printf("%d\n", stack[sp]);
        } else {
            //格納
            stack[sp] = x;
            ++sp;
        }
    }
}
