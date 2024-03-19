#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, s;
    char n[1001];
    
    while (1) {
        scanf("%s", n);
        if (n[0] == '0') {
            break;
        }
        s=0;
        for(i=0; n[i]; i++){
            s += n[i] - '0';
        }
        printf("%d\n", s);
    }
    return 0;
}
