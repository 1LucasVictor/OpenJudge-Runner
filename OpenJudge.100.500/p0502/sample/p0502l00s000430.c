#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int approved = 1;    
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        if (a % 2 == 0) {
            if  (a % 3 == 0 || a % 5 == 0)  {
            //
            } else {
                approved = 0;
                break;
            }
        }
    }
    printf("%s", approved ? "APPROVED" : "DENIED");
    return 0;
}