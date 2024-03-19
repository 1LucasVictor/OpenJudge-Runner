#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int a=0, b=0;
    char str[1001];
    char req[8];    //replace, reverse, printのどれかが入る
    char rep[1001]; //replace用
    char ptr;       //reverce用
    int q=0;
    
    scanf("%s", str);
    scanf("%d", &q);

    
    for (int i=0; i<q; i++) {
        scanf("%s %d %d", req, &a, &b);
        if (strcmp(req, "replace") == 0) {
            scanf("%s", rep);
            for (int j=0; j<(b-a+1); j++) {
                str[a+j] = rep[j];
            }
        }else if (strcmp(req, "reverse") == 0) {
            
            for (int j=0; j<(b-a+1)/2; j++) {
                ptr = str[a+j];
                str[a+j] = str[b-j];
                str[b-j] = ptr;
            }
            
            
        }else if (strcmp(req, "print") == 0) {
            for (int j=0; j<(b-a+1); j++) {
                printf("%c", str[a+j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}
