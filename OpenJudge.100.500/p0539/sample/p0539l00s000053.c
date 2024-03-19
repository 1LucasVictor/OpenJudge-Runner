#include<stdio.h>

int main() {
    int x,y;
    int z = 0;
    scanf("%d",&x);
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            y = i*j;
            if (y==x) {
                printf("Yes");
                z = 1;
                break;
            }
        }
        if (z==1) {
            break;
        }
        
    }
    if (z == 0) {
        printf("No");
    }
}