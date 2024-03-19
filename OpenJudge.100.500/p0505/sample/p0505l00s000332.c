#include <stdio.h>
int main(void){
    int h, n;
    scanf("%d%d", &h, &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++){
        h -= a[i];
    }
    if (h <= 0){
        printf("%s\n", "Yes");
    }
    else {
        printf("%s\n", "No");
    }

    return 0;
}
