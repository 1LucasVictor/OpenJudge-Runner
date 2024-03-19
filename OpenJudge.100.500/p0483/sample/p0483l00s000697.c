#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define MOD 1000000007

int min(int a, int b) {
    return a<b?a:b;
}

int max(int a, int b) {
    return a>b?a:b;
}

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, i, flag = 0;
    if(scanf("%d", &n)) {
        while(n) {
            if(n%10 == 7) {
                printf("Yes");
              	flag = 1;
                break;
            }
            n /= 10;
        }
      	if(!flag)
        	printf("No");
    }
    return 0;
}