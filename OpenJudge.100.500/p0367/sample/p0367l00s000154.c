#include <stdio.h>

int main(){
    int begin, end, n;
    scanf("%d %d %d", &begin, &end, &n);
    int i, count = 0;
    for(i = begin; i <= end; i++){
        if(n % i == 0)count++;
    }
    printf("%d\n", count);
}
