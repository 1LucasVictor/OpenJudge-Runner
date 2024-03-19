#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 2*100000
int main(void){
    char before[N], after[N];
    scanf("%s", before);
    scanf("%s", after);
    
    int i = 0, counter = 0;
    while(before[i] != '\0'){
        if(strncmp(&before[i], &after[i], 1) != 0){
            counter++;
        }
        i++;
    }
    i = 0;
    
    printf("%d\n", counter);
}
