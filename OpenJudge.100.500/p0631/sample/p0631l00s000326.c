#include <stdio.h>

int main() {
    int A,B,X,cat;
    scanf("%d %d %d",&A,&B,&X);
    
    cat = X-A ;

    if (cat<0) {
        printf("NO\n");
    } else if (cat <= B) {
        printf("YES\n");
    }else printf("NO\n");

    
    
    
    return 0;
}
