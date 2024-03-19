#include<stdio.h>

int main() {
    int i, a, b, n, m = 0;
    scanf("%d%d%d", &n, &a, &b);
    for (i = a; i <= b; i++) {
        if (i % n == 0){
            m++;

    }
}
if(m==0) {
    printf("NG\n");
}
else{
    printf("OK\n");
}

    return 0;


}