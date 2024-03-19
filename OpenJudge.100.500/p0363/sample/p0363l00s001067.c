#include <stdio.h>

int main(void) {

int num[3] = {0};
int j, k, temp = 0;

scanf ("%d %d %d", &num[0], &num[1], &num[2]);

for (j=0; j<3; j++) {
    for (k=j; k<3; k++) {
        if (num[j] > num[k]) {
            temp = num[k];
            num[k] = num[j];
            num[j] = temp;
         }
     }
}

printf ("%d %d %d\n", num[0], num[1], num[2]);

return 0;

}
