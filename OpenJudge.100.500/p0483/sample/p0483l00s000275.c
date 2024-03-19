#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char buf[8];
    char *p;
    int i;
    p = fgets(buf,8,stdin);

    for(i=0;i<3;i++){
        if(buf[i] == '7'){
            printf("Yes\n");
            p = NULL;
            break;
        }
    }

    if(p) printf("No\n");

    return 0;
}
