#include <stdio.h>
#include <string.h>

int main(void) {
    int x, y, a=0;
    scanf("%d%d", &x, &y);

    for (int i=1; i<=x; i++){
        for (int j=1; j<=x; j++){
            if (2*i+4*j==y && i+j==x){
                a = 1;
            }
        }
    }

    if (a==1){
        printf("%s", "Yes");
    }else{
        printf("%s", "No");
    }
    return 0;
}