#include <stdio.h>

int main(void) {
    char a[3];
    scanf("%s", a);
    int count = 0;
    for(int i = 0; i < 3; i++){
        if(a[i] == '1'){
            count++;
        }
    }
    printf("%d\n", count);
}
