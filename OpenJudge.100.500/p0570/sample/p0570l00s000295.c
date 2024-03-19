#include<stdio.h>
#include<math.h>
int main(){
    int a, b, i, j, n, d;
    int count = 0;
    scanf("%d %d", &a, &b);
    if((a+b)%2 == 0){
        printf("%d\n", (a+b)/2);
    }else
    {
        printf("IMPOSSIBLE\n");
    }
    return 0;
}
