#include <stdio.h>
#include <stdlib.h>

int main(void){
    char s[256];
    int i,count=0;
    for(i=0;i<3;i++){
        s[i] = getchar();
        count += s[i] - '0';
    }
    printf("%d\n",count);
    return 0;
}
