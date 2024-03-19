#include <stdio.h>

int main () {
    int a, b, c, d, e, k;
    int dis;
    scanf("%d\n%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e, &k);
    if(e - a > k || e - b > k || e - c > k || e > d > k){
        printf(":(\n");
    }
    else{
        printf("Yay!\n");
    }
    
    return 0;
}

