#include <stdio.h>
int main(void){
        int d,a,b;
        scanf("%d %d %d", &d, &a, &b);
        if (b <= a) {
            printf("%s", "delicious");
        } else if (b <= a + d) {
            printf("%s", "safe");
        } else if (b > a + d) {
            printf("%s", "dangerous");
        }
        return 0;
}