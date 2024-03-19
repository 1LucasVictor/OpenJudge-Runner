#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    char s[3];
    int i,d=0;
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='1')
            d++;
    }
    printf("%d",d);
    return 0;
}
