#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a;
    int b;
    int c; 
    scanf("%d", &a);
    scanf("%d", &b); 
    for(c=a;c>=1;c--)
        if(a%c==0 && b%c==0)
            break;
    printf("%d\n", c);
    return 0;
}
