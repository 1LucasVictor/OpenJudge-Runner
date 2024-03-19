#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c, d, i, j, n;
    int count = 0;
    scanf("%d %d %d", &a, &b, &c);
    d = a-b;
    count = c -d;
    if(count < 0){
        count = 0;
    }
    printf("%d\n", count);
    return 0;
}
