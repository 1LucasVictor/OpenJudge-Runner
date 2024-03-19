#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num, max, min;
    long long sum=0;
    
    scanf("%d", &num);
    
    int a[num];
    
    for (int i=0; i<num; i++) {
        scanf("%d", &a[i]);
    }
    
    max = -1000000;
    min = 1000000;
    
    for (int i=0; i<num; i++) {
        if (a[i] > max){
            max = a[i];
        }if (a[i] < min) {
            min = a[i];
        }
        sum += a[i];
    }
    
    printf("%d %d %lld\n", min, max, sum);
    return 0;
}
