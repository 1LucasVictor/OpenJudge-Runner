#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int c = 0;
    int a, b;
    for (int i = 1; i <= 9; i++){
        a = n % i;
        b = n / i;
        if (a == 0 && b >= 1 && b <= 9){
            c = 1;
          	break;
        }
    }
    if (c == 1){
        printf("Yes");
    } else {
      printf("NO");
    }
    return 0;
}