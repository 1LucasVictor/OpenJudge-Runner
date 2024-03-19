#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int flag = 1;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] == a[j]){
                flag = 0;
            }
        }
    }
    if (flag){
        printf("%s\n", "YES");
    }
    else {
        printf("%s\n", "NO");
    }

    return 0;
}
