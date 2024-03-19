#include <stdio.h>
#define change(x, y) {int t = x; x = y; y = t;}

int main(int argc, const char * argv[])
{
    
    int input1, input2;
    int cm;
    int rest, divided, divider;
    int i;
    
    while (scanf("%d %d", &input1, &input2) != EOF) {
        if (input1 < input2) {
            change(input1, input2);
        }
        divided = input1;
        divider = input2;
        for (i = 0; i < input1; i++) {                //ユークリッドの互除法
            rest = divided % divider;
            if (rest == 0) {
                cm = input1 / divider;
                cm *= input2;
                printf("%d %d\n", divider, cm);
                break;
            }
            divided = divider;
            divider = rest;
        }
        
    }
    return 0;
}