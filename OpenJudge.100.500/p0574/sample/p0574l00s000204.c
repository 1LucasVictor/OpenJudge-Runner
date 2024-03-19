#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#undef DBG

int main()
{
        int  inputc[4];
        int i;

        inputc[0] = getc(stdin);
        inputc[1] = getc(stdin);
        inputc[2] = getc(stdin);
        inputc[3] = getc(stdin);

        for( i; i < 3; i++ ) {
                if( inputc[i] == inputc[i+1] ) {
                        printf("Bad\n");
                        return 0;
                }
        }
        printf("Good\n");
        return 0;
}