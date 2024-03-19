#include <stdio.h>

int main(void) {
    int n, count = 0;
    scanf("%d", &n);
    int a[4] = {n/1000, n/100%10, n/10%10, n%10};
    for(int i = 0; i < 3; i++) {
        if(a[i] == a[i+1]) count++;
    }
    if(count > 0) printf("Bad\n");
    else printf("Good\n");
    return 0;
}
