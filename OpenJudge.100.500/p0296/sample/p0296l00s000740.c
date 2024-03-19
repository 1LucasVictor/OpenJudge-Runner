#include <stdio.h>
#include <ctype.h>
int main()
{
    int a, b[10], i=0;
    while(1){
        a = getchar();
        if(a == '\n'){
            printf("%d\n", b[i-1]);
            break;
        } else if(a == '+'){
            b[i-2] = b[i-2] + b[i-1];
            i = i-1;
        } else if(a == '-'){
            b[i-2] = b[i-2] - b[i-1];
            i = i-1;
        }  else if(a == '*'){
            b[i-2] = b[i-2] * b[i-1];
            i = i-1;
        } else if(isdigit(a)){
            b[i] = a - '0';
            i++;
        }
    }
    return 0;
}