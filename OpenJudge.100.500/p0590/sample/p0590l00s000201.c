#include <stdio.h>

int main() {
    int a[6], i, j, f_1=0;

    for(i=0; i<6; i++) {
        scanf("%d", &a[i]);
    }

    for(i=0; i<5; i++) {
        for(j=5; j>0; j--) {
            if(i>=j) {
                break;
            }
            if(a[j] - a[i] > a[5]) {
                f_1 = -1;
                break;
            }
        }
        if(f_1!=0) {
            break;
        }
    }

    if(f_1==0) {
        printf("Yay!\n");
    } else if (f_1==-1) {
        printf(":(\n");
    }

    return 0;
}