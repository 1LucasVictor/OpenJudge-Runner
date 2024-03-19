#include <stdio.h>

int main(){
    int h, n;
    scanf("%d %d", &h, &n);

    int damage = 0;
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        damage += val;
    }

    if (h <= damage){
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}