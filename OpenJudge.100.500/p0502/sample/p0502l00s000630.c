    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
     
    int main() {
     
        int n;
        scanf("%d", &n);
        int a;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            if (a % 2 == 0 && !(a % 3 == 0 || a % 5 == 0)) {
                printf("DENIED");
                return 0;
            }
        }
        printf("APPROVED");
     
        return 0;
     
    }