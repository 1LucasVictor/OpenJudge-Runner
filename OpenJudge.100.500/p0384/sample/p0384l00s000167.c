#include <stdio.h>

int main(int argc, const char * argv[]) {
    char a[1200];
    int i, n=0;
    while(1){
        scanf("%c", &a[n]);
        if(a[n] == '\n'){
            break;
        }
        n++;
    }
    for(i=0; i<=n; i++){
        if(a[i] >= 0x41 && a[i] <= 0x5A){
            a[i] += 32;
        }else if(a[i] >= 0x61 && a[i] <= 0x7A){
            a[i] -= 32;
        }
        printf("%c", a[i]);
    }
    return 0;
}
