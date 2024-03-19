#include <stdio.h>

int main(void) {
    int a, count = 0;
    scanf("%d",&a);
    int s[4];
    s[0] = a/1000;
    s[1] = a/100 - s[0]*10;
    s[2] = a/10 - s[0]*100 - s[1]*10;
    s[3] = a - s[0]*1000 - s[1]*100 -s[2]*10;
    for(int i = 0; i < 3; i++) {
        int hantei = s[i];
        if(hantei == s[i+1]) {
            count++;
        }
    }
    if(count > 0) {
        printf("Bad\n");
    } else {
        printf("Good\n");
    }
    return 0;
}
