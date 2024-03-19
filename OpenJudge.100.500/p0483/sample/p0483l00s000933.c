#include<stdio.h>
int main() {
	int n;
    scanf("%d", &n);
    while(n) {
        if(n % 10 == 7) return printf("Yes\n"), 0;
        n /= 10;
    }
    printf("No\n");
    return 0;
}