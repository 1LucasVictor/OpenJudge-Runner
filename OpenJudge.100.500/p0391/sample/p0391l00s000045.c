#include <stdio.h>
#include <string.h>

int main(void){
    char str[1100];
    int q, i, j;
    char order[1100];
    int a, b;
    char tmp[1100], p[1100];
    
    scanf("%s", str);
    scanf("%d", &q);
    for(i=0; i<q; i++) {
        scanf("%s", order);
        if(strcmp(order, "print") == 0) {
            scanf("%d %d", &a, &b);
            for(j=a; j<=b; j++) {
                printf("%c", str[j]);
            }
            printf("\n");
        } else if(strcmp(order, "reverse") == 0) {
            scanf("%d %d", &a, &b);
            for(j=a; j<=a+(b-a)/2; j++) {
                tmp[j] = str[j];
                str[j] = str[a+b-j];
                str[a+b-j] = tmp[j];
            }
        } else if(strcmp(order, "replace") == 0) {
            scanf("%d %d %s", &a, &b, &p);
            for(j=a; j<=b; j++) {
                str[j] = p[j-a];
            }
        }
    }
    
    return 0;
}

