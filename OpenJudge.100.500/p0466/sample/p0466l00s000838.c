#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

     char buf[16];
     char buf2[16];

     int len;
    
    scanf("%16s",buf);
    scanf("%16s",buf2);

    len = strlen(buf);

    for(int i = 0;i < len;i++){
        if(buf[i] != buf2[i]){
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");

    return 0;
}