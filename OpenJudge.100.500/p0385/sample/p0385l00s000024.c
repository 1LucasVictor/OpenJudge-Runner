#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int i, n, tmp=0;
    char x[10000];
    while (1) {
        scanf("%s",x );
        n=x[0]-'0';
        if (n==0) {
            break;
        }
        for (i=0; x[i]!='\0'; i++) {
            tmp+=x[i]-'0';
        }
        printf("%d\n", tmp);
        tmp=0;
    }
    
    return 0;
}

