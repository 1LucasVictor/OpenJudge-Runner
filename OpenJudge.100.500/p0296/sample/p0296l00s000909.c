#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
    int_fast32_t stack[100];
    int_fast8_t  index = 0 ;
    char         element[8];

    scanf("%"SCNdFAST32, &stack[index]);
    ++index;
    scanf("%"SCNdFAST32, &stack[index]);
    ++index;

    while(EOF != scanf(" %s", element))
        if      ('+' == element[0]){
            --index;
            stack[index-1] += stack[index];
        }else if('-' == element[0]){
            --index;
            stack[index-1] -= stack[index];
        }else if('*' == element[0]){
            --index;
            stack[index-1] *= stack[index];
        }else                      {
            sscanf(element, "%"SCNdFAST32, &stack[index]);
            ++index;
        }

    printf("%"PRIdFAST32"\n", stack[0]);

    return 0;
}