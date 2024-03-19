
#include <stdio.h>

int main(){
    int a, b, c, d, i, cnt=0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    for(i=0; i<=100; i++){
        if(a <= i && i < b && c <= i && i < d)
            cnt++;
    }

    printf("%d\n", cnt);
    
    return 0;
}